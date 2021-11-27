package tp4;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Samourais extends Ronin{
    String seigneur;

    public Samourais(int argent, String boisson, String nom,String seigneur) {
        super(argent,boisson,nom);
        this.seigneur = seigneur;
    }
    public  void boire(String boisson) {
        this.parler("Ahhh, un bon verre de " + boisson + "! GLOUPS !");
    }
}
