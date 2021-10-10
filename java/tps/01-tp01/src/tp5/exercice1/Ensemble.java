package tp5;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;

public class Ensemble {
    // attributes
    private HashMap<Integer, Boolean> set = null;

    //constructor

    public Ensemble() {
        this.set = new HashMap<Integer,Boolean>();
    }

    public Ensemble(int [] tab) {
        this.set = new HashMap<Integer,Boolean>();
        for (int i = 0; i < tab.length; i++) {
           this.set.put(tab[i], true) ;
        }
    }

    //methods
    public int card() {
        return this.set.size();
    }

    public Boolean appartient(int e) {
        return this.set.containsKey(e);
    }

    public  void ajouter(int e) {
        this.set.put(e,true);
    }

    public Ensemble union(Ensemble ens) {
        Ensemble monEnsemble = new Ensemble();
        monEnsemble.set.putAll(this.set);
        monEnsemble.set.putAll(ens.set);
        return monEnsemble ;
    }



    public Iterator<Integer> iterator() {
        return set.keySet().iterator();
    }

    public Ensemble intersection(Ensemble ens) {
        Ensemble ensembleResultat = new Ensemble();
        Iterator<Integer> iter = this.iterator();
        Iterator<Integer> iEns = ens.iterator();
        while (iter.hasNext()) {
            int element = iter.next();
            if (ens.appartient(element)) {
                ensembleResultat.ajouter(element);
            }
        }
        return ensembleResultat;
    }



    public int [] toArray() {
        int [] tableauResultat = new int[this.card()];

        Iterator<Integer> iter = this.iterator();

        while (iter.hasNext()) {
            int element = iter.next();
            for (int i = 0; i < tableauResultat.length; i++) {
                tableauResultat[i] = element;
            }
        }
        return tableauResultat;

    }

    public boolean inclusDans(Ensemble ens) {
        Iterator<Integer> iter = this.iterator();
        while (iter.hasNext()) {
            int element = iter.next();
            if(!ens.appartient(element)) {
                return false;
            }
        }
        return true;
    }


    @Override
    public String toString() {
        return "{" + this.set.keySet().toString() + "}";
    }

    @Override
    public boolean equals(Object obj) {
        if (obj instanceof Ensemble) {
            Ensemble monEnsemble = (Ensemble) obj;
            return this.inclusDans(monEnsemble) && monEnsemble.inclusDans(this);
        } else {
            return false;
        }
    }
    public static void main(String[] args) {
        Ensemble ens1 = new Ensemble(new int [] {5, 3, 3, 10, 3, 2});
        Ensemble ens2 = new Ensemble(new int [] {15, 3, 2, 20, 110, 5, 10});

        System.out.println(ens1);
        System.out.println(ens2);
        System.out.println(ens1.union(ens2));
        System.out.println(ens1.intersection(ens2));
        System.out.println();

        if (ens1.inclusDans(ens2)) {
            System.out.printf("%s est inclus dans %s%n", ens1, ens2);
        }

        if (new Ensemble().inclusDans(ens2)) {
            System.out.println("L'ensemble vide est inclus dans tous les ensembles...");
        }

        // Test de toArray()
        System.out.println("mon ensemble format tableau" + Arrays.toString(ens1.toArray()));
    }

}



