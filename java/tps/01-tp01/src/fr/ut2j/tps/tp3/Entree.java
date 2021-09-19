package fr.ut2j.tps.tp3;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Entree {
    //Attributes
    private int valeur;
    private Entree suivant;

    // constructor
    public Entree(int val, Entree suivant) {
        this.valeur = val;
        this.suivant = suivant;
    }

    public Entree(int val) {
        this.valeur = val;
        this.suivant = null;
    }

    //methods

    public int getValeur() {
        return valeur;
    }
    public void setValeur(int val){
        this.valeur = val;
    }

    public Entree getSuivant() {
        return this.suivant;
    }
}
