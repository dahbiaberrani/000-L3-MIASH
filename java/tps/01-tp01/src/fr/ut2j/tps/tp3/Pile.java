package fr.ut2j.tps.tp3;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Pile {
    //Attributes
       private Entree sommet;
    //Constructor
    public Pile(){
        this.sommet = null;
    }

    //Methods
    public int sommet(){
        if (this.sommet == null) {
            return 0;
        } else {
            return this.sommet.getValeur();
        }

    }
    public boolean pileVide(){
        return this.sommet == null;
    }

    public void empiler(int a) {
       Entree val = new Entree(a , this.sommet);
       this.sommet = val;
    }
    public int depiler(){

        return 1;
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

    public static void main(String[] args) {
        Pile maPile = new Pile();
        System.out.println(maPile);
        maPile.empiler(5);
        maPile.empiler(89);
        maPile.empiler(58);
        maPile.empiler(6);
        System.out.println(maPile);
    }

}
