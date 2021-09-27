package fr.ut2j.tps.tp4;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Ronin extends Humain{
    private int honneur = 1;

    public Ronin(int argent, String boisson, String nom) {
        super(argent,boisson,nom);
        this.honneur = honneur;
    }

    public void donner(int argent, Commercant c) {
        c.ajouterArgent(argent);
    }

    public void provoquer(Yakuza y) {
        if ((this.honneur)*2 > y.getReputation()) {
            y.perdre();
            honneur +=1;
            this.parler("hhh je suis gagne " + y.getArgent() + " mdr");
        } else {
            honneur -= 1;
            this.parler("j viens de perdre tout mon argent hm hm");
            y.gagner(this);
        }
    }
}
