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
        this.argent = 0;
        this.boisson = "hello";
        this.nom = "toto";
    }

    public void ajouterArgent(int argent) {
        this.argent += argent;
    }

    public void perdreArgent(int argent) {
        this.argent -= argent;
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

    public String parler(String texte) {
        return texte;
    }

    public void direBonjour() {
         this.parler("Bonjour ! Je m’appelle ... et j’aime boire du ");
    }
    public void boire() {
        this.boisson = parler("Ahhh, un bon verre de .... ! GLOUPS !");
    }
}



