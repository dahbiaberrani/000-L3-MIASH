package tp5;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class TestCouple {

    @Test
    public void testHashcode() {
        Couple key1 = new Couple(5,8);
        Couple key2 = new Couple(5,8);
        assertEquals(key1.hashCode(),key2.hashCode());
    }

    @Test
    public void testEquals() {
        Couple key1 = new Couple(5,8);
        Couple key2 = new Couple(5,8);
        assertEquals(key1,key2);
    }
}
