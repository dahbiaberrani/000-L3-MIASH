package fr.ut2j.tps.tp1;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Parfaits {

    public static void listNombreParfait(int borneSupperieur){
        if (borneSupperieur < 2){
            System.out.println("veuilliez rentrez un nombre supérieur à 2");
        } else {
            for (int i = 2; i <= borneSupperieur; i++){
                if(Parfait.estParfait(i)){
                    System.out.print(i+",");
                }
            }
        }
    }
    public static void main(String[] args){
        System.out.println(args[0]);
        int borneSup = Integer.parseInt(args[0]);
        listNombreParfait(borneSup);
    }
}
