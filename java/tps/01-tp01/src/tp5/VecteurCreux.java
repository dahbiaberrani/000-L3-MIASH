package tp5;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import java.util.HashMap;
import java.util.HashSet;

public class VecteurCreux {
    // attributes
    private HashMap<Integer, Integer> vect;
    private int taille;
    private int valeurReference;

    //constructor
    public VecteurCreux(int taille, int valeurRef) {
        this.vect = new HashMap<Integer, Integer >();
        this.valeurReference = valeurRef;
        this.taille = taille;
    }

    public VecteurCreux(VecteurCreux vectCreux) {
        this.taille = vectCreux.taille;
        this.valeurReference = vectCreux.valeurReference;
        this.vect = (HashMap<Integer, Integer>) vectCreux.vect.clone();
    }


    public  Integer getValue(int i) {
        if (i >= this.taille || i < 0) {
            throw new IndexOutOfBoundsException(" index out of bounds  ");
        }
        int value = valeurReference;
        if (this.vect.containsKey(i)) {
            value = this.vect.get(i);
        }
        return value;
    }

    public void setValue(Integer ind, int e ) {
        if (ind >= this.taille || ind < 0) {
            throw new IndexOutOfBoundsException(" index out of bounds  ");
        }
        if (this.valeurReference != e) {
            this.vect.put(ind, e);
        }

    }

    public VecteurCreux add(VecteurCreux vect) {

        // Vérification des pré conditions
        if ( this.taille != vect.taille) {
            throw new ArithmeticException ("les vecteurs doit avoir la même taille pour faire la somme ");
        }

        int valRefResultat = vect.valeurReference + this.valeurReference;
        VecteurCreux vectResultat = new VecteurCreux(this.taille,valRefResultat);
        for (int i = 0; i < vectResultat.taille; i++) {
            vectResultat.setValue(i, this.getValue(i)+vect.getValue(i));
        }
        return vectResultat;
    }


    @Override
    public String toString() {
        String resultat = "";
        for (int i = 0; i < this.taille; i++) {
            if (this.vect.keySet().contains(new Integer(i)) ){
                resultat += this.vect.get(i) + ",";
            } else {
                resultat += this.valeurReference +",";
            }
        }
        return "{"+  resultat + "}";
    }



        public static void main(String[] args) {
            VecteurCreux vect1 = new VecteurCreux(20, 42);
            vect1.setValue(1, 3);
            vect1.setValue(2, 4);
            vect1.setValue(3, 12);
            System.out.println("vect1 = " + vect1);

            VecteurCreux vect2 = new VecteurCreux(20, 42);
            vect2.setValue(1, 4);
            vect2.setValue(2, 10);
            vect2.setValue(12, 100);
            vect2.setValue(3, -12);
            System.out.println("vect2 = " + vect2);

            System.out.println("vect1 + vect2 = " + vect1.add(vect2));

            VecteurCreux vect3 = new VecteurCreux(vect2);
            vect2.setValue(19, 16);    // On modifie vect2
            // et ça n'a pas d'influence sur vect3...
            System.out.printf("vect2[20] = %d, vect3[20] = %d%n", vect2.getValue(19), vect3.getValue(19));
        }


}
