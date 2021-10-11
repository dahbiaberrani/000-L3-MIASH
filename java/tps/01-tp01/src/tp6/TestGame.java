package tp6;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class TestGame {

    public static void main(String[] args) {
        Coord[] coords = new Coord[5];
        coords[0] = new Coord(50,8);
        coords[1] = new Coord(5,18);
        coords[2] = new Coord(5,80);
        coords[3] = new Coord(15,8);
        coords[4] = new Coord(55,18);
        Game g1 = new Game(coords,5,5);

    }


}
