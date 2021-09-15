package fr.ut2j.tps.tp1;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Amis {

    public static void rechercheCoupleDivisuer(int borneSupperieur){
        for(int i=2; i <= borneSupperieur;i++){
            if(Parfait.sommeDiviseurs1(i)==Parfait.sommeDiviseurs1(i+1)){
                System.out.println("(" + i + ","+ i+1+")");
            }
        }
    }

     public static void main(String[] args) {
         System.out.println(args[0]);
         int borneSupp = Integer.parseInt(args[0]);
         rechercheCoupleDivisuer(borneSupp);
    }
}
