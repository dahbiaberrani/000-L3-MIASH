package tp6;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class TestCoord {


    @Test
    public void   testHashcode() {
        Coord cor1 = new Coord(5,8);
        Coord cor2 = new Coord(5,8);
        assertEquals(cor1.hashCode(),cor2.hashCode());
    }

    @Test
    public void TestEqualCoord() {
        Coord coord1 = new Coord(8,5);
        Coord coord = new Coord(8,5);
        assertEquals(coord1,coord);
    }
}
