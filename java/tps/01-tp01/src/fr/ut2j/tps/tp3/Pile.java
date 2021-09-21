package fr.ut2j.tps.tp3;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */
class InvalidOperationException extends RuntimeException { }
public class Pile {
    //Attributes
       private Entree sommet;
    //Constructor
    public Pile() {
        this.sommet = null;
    }

    //Methods
    public Integer sommet() {
        if (this.sommet == null) {
            return null;
        } else {
            return this.sommet.getValeur();
        }

    }

    public boolean pileVide() {
        return this.sommet == null;
    }

    public void empiler(int a) {
       Entree val = new Entree(a , this.sommet);
       this.sommet = val;
    }

    public int depiler() {
        if (this.sommet == null){
            throw new InvalidOperationException();
        }else{
            this.sommet = sommet.getSuivant();
        }
        return sommet.getValeur();
    }

    @Override
    public String toString() {
        Entree courant = this.sommet;
        String resultat = "";
        while (courant != null) {
            resultat += courant.getValeur() + ", ";
            courant = courant.getSuivant();
        }
        return "[" + resultat + "]";
    }
    public Pile cloneRenversed() {
        Entree courant = this.sommet;
        Pile cloneReversed = new Pile();
        while (courant != null){
            cloneReversed.empiler(courant.getValeur());
            courant = courant.getSuivant();
        }
        return cloneReversed;

    }

    @Override
    public Pile clone() /*throws CloneNotSupportedException*/{
        return this.cloneRenversed().cloneRenversed();
    }


    public static void main(String[] args) {
        Pile maPile = new Pile();
        System.out.println(maPile);
        maPile.empiler(5);
        maPile.empiler(89);
        maPile.empiler(58);
        maPile.empiler(6);
        Pile maCopiePile = maPile.clone();
        System.out.println(maPile);
        int a = maPile.depiler();
        System.out.println(a);
        System.out.println(maPile);
        maPile.depiler();
        System.out.println(maPile);
        System.out.println(maCopiePile);
    }

}
