package tp6;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.PrintStream;

public class TestGameHtml {

    public static void main(String[] args) throws FileNotFoundException {
        int nbGen = 0;
        switch (args.length) {
            case 0:
                nbGen = 5;
                break;
            case 1:
                nbGen = Integer.parseInt(args[0]);
                break;
            case 2:
                nbGen = Integer.parseInt(args[0]);
                FileOutputStream file = new FileOutputStream(args[1]);
                System.setOut(new PrintStream(file));
                break;
            default:
                System.out.println("Erreur ");
        }

        boolean stable;

        Coord[] coords = {new Coord(0, 3), new Coord(1, 2),
                new Coord(2, 2), new Coord(2, 3),
                new Coord(2, 4)};
        GameHTML jeu = new GameHTML(coords, 5, 5);

        System.out.println(jeu.initHtml());

        int genCourante = 1;
        do {
            System.out.println("<h2>Génération " + genCourante + "</h2>\n");
            System.out.println(jeu.toHtml());
            stable = jeu.nextGen();
            genCourante += 1;
        } while (!stable && genCourante <= nbGen);

        System.out.println(jeu.endHtml());

    }
}
