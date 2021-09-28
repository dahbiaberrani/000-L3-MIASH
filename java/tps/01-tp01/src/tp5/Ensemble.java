package tp5;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import java.util.HashMap;

public class Ensemble {
    // attributes
    private HashMap<Integer, Boolean> set = null;


    //constructor

    public Ensemble() {
        this.set = new HashMap<Integer,Boolean>();
    }
    public Ensemble(int [] tab) {

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

    public Ensemble union(Ensemble ens) {
        Ensemble monEnsemble = new Ensemble();

        return monEnsemble;
    }
}
