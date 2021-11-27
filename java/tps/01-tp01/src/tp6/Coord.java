package tp6;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Coord {
    //attributes

    private int lig;
    private int col;

    //constructor

    public Coord(int line, int row) {
        this.lig = line;
        this.col = row;
    }

    @Override
    public int hashCode() {
        String coord = "(" + this.lig + this.col + ")";
        return coord.hashCode();
    }

    public int getLig() {
        return this.lig;
    }
    public int getCol() {
        return this.col;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj instanceof Coord){
            if (this == obj) {
                return true;
            } else {
                Coord coord = (Coord)obj;
                return this.lig == coord.lig && this.col == coord.col;
            }
        }else {
            return false;
        }
    }
}
