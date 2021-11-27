package fr.ut2j.tps.tp2;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import java.util.Arrays;

public class TableauUtils {

    public static  int [] tab1 = {54,2,10,102,3,18,1,0,-15,1500};
    public static void afficherTableau(int [] tab) {
        System.out.print("[");
        for (int i = 0; i < tab.length; i++) {
            System.out.print(tab[i]+",");
        }
        System.out.println("]");
    }

    public static void main(String[] args) {
        afficherTableau(tab1);
        Arrays.sort(tab1);
        afficherTableau(tab1);
        System.out.println(tab1);

    }


}
