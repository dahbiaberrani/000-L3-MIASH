package fr.ut2j.tps;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Utils {
    // methods

    public static int pgcd(int x, int y) {
        int r=0, a, b;
        if (x > y) {
            a = x;
        } else {
            a = y;
        }
        if (x < y) {
            b = x;
        } else {
            b = y;
        }
        r = b;
        while(a % b != 0)
        {
            r = a % b;
            a = b;
            b = r;
        }
        return r;
    }

    public static String tabToString(int[] tab) {
        String resultat = "{";
        for (int i = 0; i < tab.length; i++) {
            resultat += tab[i] + ",";
        }

            return resultat + "}";
    }
}
