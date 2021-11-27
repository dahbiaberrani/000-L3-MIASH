package tp4;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class MonHistoire {


    public static void main ( String [ ] args ) {
        Humain h = new Humain( 10, "Porto", " Prof " );
        h.direBonjour();
        h.boire( );
        Commercant c = new Commercant(35,"Marchand" );
        c.direBonjour();
        Yakusa y = new Yakusa ( 42, " bière " , "WarSong" , " Yaku  le noir" );
        y.direBonjour();
        y.extorquer(c);
        Ronin r = new Ronin ( 61, " saké ", "Roro" );
        r.donner (10 , c );
        r.provoquer(y);
        r.direBonjour();
        Samourais s = new Samourais( 100, "vodka ", "Sam", "Tupak " );
        s.direBonjour();
        s.boire("cacao") ;
    }
}
