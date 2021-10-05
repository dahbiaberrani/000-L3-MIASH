package tp5;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import java.util.HashMap;

public class MatriceCreuse {

    // attributes
    private HashMap<Couple, Integer> matrice;
    private int tailleLig;
    private  int tailleCol;

    // constructors

    public MatriceCreuse(int tailleCol,int tailleLig) {
        this.matrice = new HashMap<Couple, Integer>();
        this.tailleCol = tailleLig;
        this.tailleCol = tailleCol;
    }


    public int getValue(int i,int j) {
       return this.matrice.getOrDefault(new Couple(i,j),0);
    }

    public void set(int ind1 = ,int val) {

        this.matrice.put(new Couple())
    }
//    @Override
//    public String toString() {
//        String matrice = "";
//        for (int i = 0; i < tailleLig; i++) {
//            for (int j = 0; j < tailleCol; i++ ) {
//
//            }
//        }
//        return matrice;
//    }
}
