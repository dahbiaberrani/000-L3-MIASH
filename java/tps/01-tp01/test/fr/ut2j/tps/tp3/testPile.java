package fr.ut2j.tps.tp3;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertNotEquals;


public class testPile {
    @Test
    public void testClone() {
        Pile maPile = new Pile();
        maPile.empiler(56);
        maPile.empiler(89);
        maPile.empiler(102);
        Pile maCopie = maPile.clone();
        assertEquals(maPile, maCopie);
        maPile.depiler();
        assertNotEquals(maPile, maCopie);
    }

    @Test
    public void testSize() {
        Pile maPile = new Pile();
        maPile.empiler(56);
        maPile.empiler(89);
        maPile.empiler(102);
        Pile maPile1 = new Pile();
        assertEquals(3, maPile.size());
        assertNotEquals(2,maPile.size());
        assertEquals(0, maPile1.size());
    }

    @Test
    public void testGetArray() {
        Pile maPile = new Pile();
        maPile.empiler(56);
        maPile.empiler(89);
        maPile.empiler(102);
        maPile.getArray();


    }


}
