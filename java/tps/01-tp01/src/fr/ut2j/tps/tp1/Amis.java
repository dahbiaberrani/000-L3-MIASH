package fr.ut2j.tps.tp1;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Amis {

    public static void rechercheCoupleDiviseur(int borneSupperieur){
        for(int i=2; i <= borneSupperieur;i++){
            for(int j=i+1; j <= borneSupperieur;j++)
                if(Parfait.sommeDiviseurs(i)==Parfait.sommeDiviseursSqrt(j) && Parfait.sommeDiviseursSqrt(i) != 1) {
                    System.out.println("(" + i + ","+ j +")");
            }
        }
    }

     public static void main(String[] args) {
         System.out.println(args[0]);
         int borneSupp = Integer.parseInt(args[0]);
         rechercheCoupleDiviseur(borneSupp);
    }
}
