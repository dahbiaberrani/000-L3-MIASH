package fr.ut2j.tps.tp2;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Fusion {
    public static  int [] []tab2= {{54,2,10,102,3,18},{1,0,-15,1500}};
        public static int [] fusion(int[][] tableau) {
            int[] resultats = new int[tableau.length];
            for (int i = 0; i < tableau.length-1; i++) {
                for (int j = 1; j < tableau.length-1; j++) {
                    if (tableau[i][j] <= tableau[j][i]) {
                        resultats = tableau[i];
                    } else {
                        resultats = tableau[j];
                    }
                }

            }
            return resultats;
        }
    public static void main(String[] args) {

        int [] resultats = (fusion(tab2));
        TableauUtils.afficherTableau(resultats);
         }
}

