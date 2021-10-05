package tp5;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import java.util.HashMap;
import java.util.Iterator;

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

    public  Integer getValue(int i) {
        int value = valeurReference;
        for (var ind: this.vect.keySet()) {
            if (ind == i) {
                value = this.vect.get(i);
            }
        } return value;
    }

    public void set(Integer ind, int e ) {
        if (this.valeurReference != e) {
            this.vect.put(ind, e);
        }

    }

    public Iterator<Integer> iterator() {
        return vect.keySet().iterator();
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

    public VecteurCreux add(VecteurCreux vect) {
        VecteurCreux vectResultat = new VecteurCreux(this.taille + vect.taille,vect.valeurReference + this.valeurReference);
        for (var elt : vectResultat.vect.keySet()) {
                if (this.vect.containsKey(elt) && (vect.vect.containsKey(elt))) {
                    if (vectResultat.valeurReference != this.getValue(elt)+vect.getValue(elt)) {
                        vectResultat.set(elt,this.getValue(elt)+vect.getValue(elt));
                    }
            }
        }

            return vectResultat;
    }

    public static void main(String[] args) {
        VecteurCreux vect1 = new VecteurCreux(5, 42);
        vect1.set(5, 3);
        vect1.set(2, 4);
        vect1.set(0, 12);
        System.out.println("vect1 = " + vect1);

        VecteurCreux vect2 = new VecteurCreux(5, 42);
        vect2.set(1, 4);
        vect2.set(0, 10);
        vect2.set(2, 100);
        vect2.set(3, -12);
        System.out.println("vect2 = " + vect2);
        System.out.println("vect1 + vect2 = " + vect1.add(vect2));

//        VecteurCreux vect3 = new VecteurCreux(vect2);
//        vect2.set(20, 16);    // On modifie vect2
//        // et ça n'a pas d'influence sur vect3...
//        System.out.printf("vect2[20] = %d, vect3[20] = %d%n", vect2.getValue(20), vect3.getValue(20));

    }
}
