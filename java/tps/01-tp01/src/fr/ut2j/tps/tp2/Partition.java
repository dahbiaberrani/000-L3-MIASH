package fr.ut2j.tps.tp2;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import static fr.ut2j.tps.tp2.TableauUtils.tab1;

public class Partition{

    public static int [][]  partition(int valeurReference, int[] tableau){
        int [] tabInf = new int[tableau.length];
        int [] tabSup = new int[tableau.length];
        int [][] resultats = {tabInf,tabSup};
        for(int i = 0; i < tableau.length; i++) {
            if(tableau[i] <= valeurReference) {
                tabInf[i] = tableau[i];
            } else {
                tabSup[i] = tableau[i];
            }
        }
        return resultats;
    }

    public static void main(String[] args){
        TableauUtils.afficherTableau(tab1);
        int [][] resultats =  partition(8, tab1);
        TableauUtils.afficherTableau(resultats[0]);
        TableauUtils.afficherTableau(resultats[1]);


    }
}
