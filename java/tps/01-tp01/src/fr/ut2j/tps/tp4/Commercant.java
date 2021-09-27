package fr.ut2j.tps.tp4;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Commercant extends Humain {

    public Commercant(int argent) {
        super(argent, "thé", "commercant");
    }

    public int seFaireExtorquer() {
         this.parler("le monde est vraiment trop injuste");
         return this.perdreArgent(this.getArgent());
    }
    public void recevoir(int argent){
        this.ajouterArgent(argent);
    }
}
