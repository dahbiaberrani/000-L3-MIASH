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
    void testConsctructeur(){
        Fraction f2 = new Fraction(50, 5);
        assertEquals(50,f2.getNum());
        assertEquals(5,f2.getDen());
    }

    @Test
    void testSetter(){
        Fraction f2 = new Fraction(50, 5);
        f2.setNumerateur(81);
        assertEquals(81,f2.getNum());
        f2.setDenominateur(56);
        assertEquals(56, f2.getDen());
    }
}
