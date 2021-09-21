package fr.ut2j.tps.tp3;

import fr.ut2j.tps.Utils;

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
    public Pile(int [] tab) {
        Pile maPile = new Pile();

        for (int i = 0; i < tab.length; i++){
            maPile.empiler(tab[i]);
        }
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
    public Pile cloneRenversed() {
        Entree courant = this.sommet;
        Pile cloneReversed = new Pile();
        while (courant != null){
            cloneReversed.empiler(courant.getValeur());
            courant = courant.getSuivant();
        }
        return cloneReversed;

    }
    public int size() {
        int taille = 0;
        while (this.sommet != null) {
            taille += 1;
            this.sommet = this.sommet.getSuivant();
        }
        return taille;
    }
    public int [] getArray(){
        Entree courant = this.sommet;
        int tableau [] =  new int[this.size()];
        int i = 0;
        while (courant != null) {
            tableau[i] = courant.getValeur();
            courant = courant.getSuivant();
            i++;
        }
        return tableau;
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


    @Override
    public Pile clone() /*throws CloneNotSupportedException*/{
        return this.cloneRenversed().cloneRenversed();
    }
    @Override

    public boolean equals(Object obj) {
        Pile autrePile = (Pile) obj;
        boolean resultat = true;
        Entree courantThis = this.sommet;
        Entree courantAutre = autrePile.sommet;
        while (courantAutre != null && courantThis != null && resultat) {
            if (!courantThis.equals(courantAutre)){
                resultat = false;
            } else {
                courantThis = courantThis.getSuivant();
                courantAutre = courantAutre.getSuivant();
            }
        }
        return resultat && courantAutre == null && courantThis == null;
    }


    public static void main(String[] args) {
        // test la methode empiler
        Pile maPile = new Pile();
        System.out.println(maPile);
        maPile.empiler(5);
        maPile.empiler(89);
        maPile.empiler(58);
        maPile.empiler(6);
        System.out.println(maPile);
        // test depiler
        maPile.depiler();
        System.out.printf("ma pile:" + maPile + "\n" );
        maPile.depiler();
        System.out.printf("maPile" + maPile + "\n");
        // test getArrays
        maPile.empiler(15);

        System.out.println("tableau" + Utils.tabToString(maPile.getArray()));


    }

}
