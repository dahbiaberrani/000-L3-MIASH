package fr.ut2j.tps.tp1;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertNotEquals;


public class Parfaittest {

    @Test
    void testSommeDiviseursSqrt() {
        assertEquals(7, Parfait.sommeDiviseursSqrt(8));
        assertEquals(4, Parfait.sommeDiviseursSqrt(9));
        assertEquals(6, Parfait.sommeDiviseursSqrt(25));
        assertEquals(284, Parfait.sommeDiviseursSqrt( 220));
        assertNotEquals(12, Parfait.sommeDiviseursSqrt(8));
        assertEquals(28, Parfait.sommeDiviseursSqrt(28));
    }

    @Test
    void testSommeDiviseurs() {
        assertEquals(7, Parfait.sommeDiviseurs(8));
        assertEquals(4, Parfait.sommeDiviseurs(9));
        assertEquals(284, Parfait.sommeDiviseurs( 220));
        assertEquals(6, Parfait.sommeDiviseurs(25));
        assertNotEquals(12, Parfait.sommeDiviseurs(8));
        assertEquals(28, Parfait.sommeDiviseurs(28));
    }

    @Test
    void testSommeDiviseursSqrtTime() {
        assertEquals(534205465, Parfait.sommeDiviseursSqrt(999999999));
    }

    @Test
    void testSommeDiviseursTime() {
        assertEquals(534205465, Parfait.sommeDiviseurs(999999999));
    }
}
