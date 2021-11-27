package tp5;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */



import java.util.HashSet;
import java.util.Iterator;

public class EnsembleHachSet {
    //Attributes
    private HashSet <Integer> data = null;

    //Constructor
    public EnsembleHachSet() {
        this.data = new HashSet <Integer>();
    }

    //Methods
    public  void ajouter(int e) {
        this.data.add(e);
    }

    public void supprimer(int e) {
        this.data.remove(e);
    }

    public int card() {
        return this.data.size();
    }

    public Boolean appartient(int e) {
        return this.data.contains(e);
    }

    public Iterator<Integer> iterator() {
        return this.data.iterator();
    }

    public EnsembleHachSet union(EnsembleHachSet ens) {
        EnsembleHachSet monEnsemble = new EnsembleHachSet();
        // Ajout des elements de this
        Iterator<Integer> iter = this.iterator();
        while(iter.hasNext()) {
            int element = iter.next();
            monEnsemble.ajouter(element);
        }
        // Ajout des elements de ens
        iter = ens.iterator();
        while(iter.hasNext()) {
            int element = iter.next();
            monEnsemble.ajouter(element);
        }
        return monEnsemble ;
    }

    public EnsembleHachSet intersection(EnsembleHachSet ens) {
        return null;
    }

    public boolean inclusDans(EnsembleHachSet ens) {
        Iterator<Integer> iter = ens.iterator();
        while (iter.hasNext()) {
            int element = iter.next();
            if(!this.appartient(element)) {
                return false;
            }
        }
        return true;
    }

    @Override

    public String toString() {
        return "{" + this.data + ",}";
    }

    @Override
    public boolean equals(Object obj) {
        if (obj instanceof EnsembleHachSet) {
            EnsembleHachSet monEnsemble = (EnsembleHachSet) obj;
            return this.inclusDans(monEnsemble) && monEnsemble.inclusDans(this);
        } else {
            return false;
        }
    }


}
