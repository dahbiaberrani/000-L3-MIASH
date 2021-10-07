package tp5;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import java.util.HashMap;
import java.util.Iterator;

public class MatriceCreuse {

    // attributes
    private HashMap<Couple, Integer> matrice;
    private int tailleLig;
    private  int tailleCol;
    private int defaultValue;

    // constructors

    public MatriceCreuse(int tailleLig, int tailleCol, int defaultValue) {
        this.matrice = new HashMap<Couple, Integer>();
        this.tailleLig = tailleLig;
        this.tailleCol = tailleCol;
        this.defaultValue = defaultValue;

    }

    public int getValue(int i,int j) {
        if ( (i >= this.tailleLig || i < 0)  || (j >= this.tailleCol || j < 0) ) {
            throw new IndexOutOfBoundsException(" index out of bounds  ");
        }
        return this.matrice.getOrDefault(new Couple(i,j), this.defaultValue);
    }

    public void setValue(int indLig, int indCol ,int val) {
        if (indLig >= this.tailleLig || indLig < 0 || indCol >= this.tailleCol || indCol < 0) {
            throw new IndexOutOfBoundsException(" index out of bounds  ");
        }
        if (this.defaultValue != val) {
            this.matrice.put(new Couple(indLig,indCol),val);
        }
    }

    public Iterator iterator() {
        return matrice.keySet().iterator();
    }

    public MatriceCreuse add(MatriceCreuse mat) {
        MatriceCreuse resultatMat = new MatriceCreuse(mat.tailleLig, mat.tailleCol, mat.defaultValue+this.defaultValue);
        if (this.tailleCol != this.tailleCol && mat.tailleLig != mat.tailleLig) {
            throw new ArithmeticException ("l’addition de deux matrices avec des  tailles égales");
        }
        for (int i = 0; i < mat.tailleLig; i++ ) {
            for (int j = 0; j < mat.tailleCol; j++) {
                resultatMat.setValue(i,j,(this.getValue(i,j) + mat.getValue(i,j)));
            }
        }
        return resultatMat;
    }

    public MatriceCreuse multiplication(int scalaire) {
        MatriceCreuse  resultat = new MatriceCreuse(this.tailleLig, this.tailleCol, this.defaultValue);
        for (int i = 0; i < this.tailleLig; i++ ) {
            for (int j = 0; j < this.tailleCol; j++) {
                resultat.setValue(i,j,(this.getValue(i,j) * scalaire));
            }
        }
        return resultat;
    }

    @Override
    public String toString() {
        String matrice = "";
        for (int lineIndex = 0; lineIndex < this.tailleLig; lineIndex++ ) {
            matrice += "|\t";
            for (int rowIndex = 0; rowIndex < this.tailleCol; rowIndex++) {
                matrice += this.getValue(lineIndex, rowIndex) + "\t";
            }
            matrice += "|\n";
        }
        return matrice;
    }

    public static void main(String[] args) {
        MatriceCreuse data = new MatriceCreuse(2,2,5);
        MatriceCreuse data1 = new MatriceCreuse(2,2,1);
        data.setValue(0,1,60);
        data1.setValue(0,1,45);
        System.out.println(data);
        System.out.println(data1);

        System.out.println("data + data1 = \n" + data.add(data1));
        System.out.println("data1 x 5 = \n" + data1.multiplication(5));
    }
}
