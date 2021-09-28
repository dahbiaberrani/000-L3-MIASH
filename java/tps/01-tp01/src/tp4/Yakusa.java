package tp4;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Yakusa extends Humain {
    private String clan;
    private int reputation = 0;

    public Yakusa(int argent, String boisson, String nom, String clan ) {
        super(argent, boisson, nom);
        this.clan = clan;
    }

    public String getClan() {
        return clan;
    }

    public int getReputation() {
        return reputation;
    }

    public void extorquer(Commercant commercant) {
        this.ajouterArgent(commercant.seFaireExtorquer());
        this.reputation += 1;
        this.parler( "J’ai dépouillé  " + commercant.getNom());
    }

    public void gagner(Ronin r) {
        this.ajouterArgent(r.getArgent());
    }
    public int  perdre() {
        return  this.perdreArgent(getArgent());
    }


    public void direBonjour() {
        this.parler("("+ this.clan + ")");
        super.direBonjour();
        this.parler("Je suis fier de faire partie des " + this.getNom());
    }
}
