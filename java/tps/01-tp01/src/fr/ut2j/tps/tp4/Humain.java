package fr.ut2j.tps.tp4;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Humain {
    // attributes
    private int argent;
    private  String boisson;
    private  String nom;

    public Humain(int argent, String boisson, String nom ) {
        this.argent = argent;
        this.boisson = boisson;
        this.nom = nom;
    }

    public void ajouterArgent(int argent) {
        this.argent += argent;
    }

    public int perdreArgent(int argent) {
        this.argent -= argent;
        return argent;
    }

    public String getNom() {
        return this.nom;
    }

    public int getArgent() {
        return this.argent;
    }

    public String getBoisson() {
        return this.boisson;
    }

    public void parler(String texte) {
        System.out.println("(" + this.nom + ")" + "-" + texte);
    }

    public void direBonjour() {
         this.parler("Bonjour ! Je m’appelle " + this.nom + "  et j’aime boire du " + this.boisson + "j'ai  " + this.argent + "$ sous en poche");
    }
    public void boire() {
        this.parler("Ahhh, un bon verre de " + this.boisson + " .... ! GLOUPS !");
    }

}



