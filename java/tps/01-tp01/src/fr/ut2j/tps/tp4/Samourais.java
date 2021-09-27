package fr.ut2j.tps.tp4;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Samourais extends Ronin{
    String seigneur;

    public Samourais(int argent, String boisson, String nom) {
        super(argent,boisson,nom);
        this.seigneur = nom;
    }
    public  void boire(String boisson) {
        this.boire();
        this.parler("");
    }
}
