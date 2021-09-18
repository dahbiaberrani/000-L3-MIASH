package fr.ut2j.tps.tp3;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class testFraction {

    @Test
    void testConstructeurParDefault() {
        Fraction f1 = new Fraction();
        assertEquals(0, f1.getNum());
        assertEquals(1, f1.getDen());
    }

    @Test
    void testConsctructeur() {
        Fraction f2 = new Fraction(50, 5);
        assertEquals(50,f2.getNum());
        assertEquals(5,f2.getDen());
    }

    @Test
    void testSetter() {
        Fraction f2 = new Fraction(50, 5);
        f2.setNum(81);
        assertEquals(81,f2.getNum());
        f2.setDen(56);
        assertEquals(56, f2.getDen());
    }
    @Test
    void testFonctionAdd() {
        Fraction f1 = new Fraction(4,3);
        Fraction f2 = new Fraction(5, 4);
        Fraction f3 = new Fraction(31, 12);
        assertEquals(f3, f1.add(f2));
    }
    @Test
    void testFonctionMult() {
        Fraction f1 = new Fraction(4,3);
        Fraction f2 = new Fraction(5, 4);
        Fraction f3 = new Fraction(20, 12);
        assertEquals(f3, f1.mult(f2));
    }
    @Test
    void testFonctionDiv() {
        Fraction f1 = new Fraction(4,3);
        Fraction f2 = new Fraction(5, 4);
        Fraction f3 = new Fraction(16, 15);
        assertEquals(f3, f1.div(f2));
    }
    @Test
    void testFonctionAddInteger() {
        Fraction f1 = new Fraction(4,3);
        int f2 = 5;
        Fraction f3 = new Fraction(19, 3);
        assertEquals(f3, f1.add(f2));
    }
    @Test
    void testToString() {
        Fraction f1 = new Fraction(4,3);
        assertEquals("(4/3)", f1.toString());
    }
}
