package tp5;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Couple {
    // attributes

    private  int i;
    private  int j;

    //constructors

    public Couple(int i,int j) {
        this.i = i;
        this.j = j;
    }

    @Override
    public String toString() {
        String res = "(" + i + j + ")";
        return res;

    }

    @Override
    public int hashCode() {
        return this.toString().hashCode();
    }

    @Override
    public boolean equals(Object obj) {

        if (obj instanceof Couple) {
            Couple couple = (Couple) obj;
            if (this == obj) {
                return true;
            } else {
                return this.j == this.i;
            }
        } else {
            return false;
        }
    }
}
