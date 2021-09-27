package fr.ut2j.tps.tp4;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Commercant extends Humain {

    public Commercant(int argent, String nom) {
        super(argent, "thé",  nom);
    }

    public int seFaireExtorquer() {
         this.parler("J’ai tout perdu ! Le monde est trop injuste...");
         return this.perdreArgent(this.getArgent());
    }
    public void recevoir(int argent){
        this.ajouterArgent(argent);
        this.parler("Merci, généreux donateur !!!");
    }
}
