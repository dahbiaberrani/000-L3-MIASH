package tp6;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import java.util.HashSet;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Game {
    //attributes
    private HashSet<Coord> damier;
    private int nbLigs, nbCols;

    //constructor

    public Game(Coord[] listeInitiale, int nbLigs, int nbCols) {
        this.damier = new HashSet<Coord>();
        for (int i = 0; i < listeInitiale.length;i++) {
            this.damier.add(listeInitiale[i]);
        }
        this.nbLigs = nbLigs;
        this.nbCols =nbCols;
    }

    public Game(int nbLigs, int nbCols) {
        this.nbLigs = nbLigs;
        this.nbCols = nbCols;
    }

    //methods

    public boolean estVivante(Coord coord) {
        return this.damier.contains(coord);
    }

    private String showCell(Coord coord) {
       if (this.estVivante(coord)) {
           return "#";
       } else {
           return ".";
       }
    }

    private String showLig(int numLig) {
        String resultat = "";
        for (int col = 0; col< this.nbCols; col++ ) {
           resultat += this.showCell(new Coord(numLig,col)) +"\t";
        }
        return resultat;
    }

    private int nbVoisinesVivantes(Coord coord) {
        int compteur = 0;
         if (this.estVivante(new Coord(coord.getLig()-1,coord.getCol()-1))) {
             compteur += 1;
         }
         if (this.estVivante(new Coord(coord.getLig()-1,coord.getCol()))) {
             compteur += 1;
         }
         if (this.estVivante(new Coord(coord.getLig()-1,coord.getCol()))) {
             compteur += 1;
         }
         if (this.estVivante(new Coord(coord.getLig()-1,coord.getCol()+1))) {

         }
         if (this.estVivante(new Coord(coord.getLig(),coord.getCol()-1))) {
             compteur +=1;
         }
         if (this.estVivante(new Coord(coord.getLig(),coord.getCol()+1))) {
             compteur += 1;
         }
         if (this.estVivante(new Coord(coord.getLig()+1,coord.getCol()-1))){
             compteur += 1;
         }
         if (this.estVivante(new Coord(coord.getLig()+1,coord.getCol()))){
             compteur += 1;
         }
        if (this.estVivante(new Coord(coord.getLig()+1,coord.getCol()+1))){
            compteur += 1;
        }
         return compteur;
    }


//    private boolean evolution(Coord coord) {
//        Coord coord1 = new Coord(coord.getLig()-1,coord.getCol()-1);
//        Coord coord2 = new Coord(coord.getLig()-1,coord.getCol()+1);
//        Coord coord3 = new Coord(coord.getLig()+1,coord.getCol());
//        return  (this.estVivante(coord1) && this.estVivante(coord2) && this.estVivante(coord3));
//    }

    private boolean evolution(Coord coord) {
        int nbVoisinesVivantes = this.nbVoisinesVivantes(coord);
        if (nbVoisinesVivantes == 2) {
            return this.estVivante(coord);
        }
        if (nbVoisinesVivantes == 3) {
            return true;
        } else {
            return false;
        }
    }

    public boolean nextGen() {
        HashSet<Coord> nextgeneration = new HashSet<Coord>();
        for (int line = 0; line < this.nbLigs; line++) {
            for (int row = 0; row < this.nbCols; row++) {
                Coord caseCourante = new Coord(line, row);
                if (this.evolution(caseCourante)) {
                    nextgeneration.add(caseCourante);
                }
            }
        }

        HashSet<Coord> ancienDamier = this.damier;
        this.damier = nextgeneration;
        return ancienDamier.equals(nextgeneration);

    }

    @Override
    public String toString() {
        String resultat = "";
        for (int line = 0; line < this.nbLigs; line++) {
            resultat += this.showLig(line) + "\n";
        }
        return resultat;
    }

//    public static void main(String[] args) {
//        Coord[] coords = {new Coord(0, 3), new Coord(1, 2),
//                new Coord(2, 2), new Coord(2, 3),
//                new Coord(2, 4)};
//
//        Game jeu = new Game(coords, 5, 5);
//        System.out.println(jeu);
//        System.out.println(jeu.nbVoisinesVivantes(new Coord(2,3)));
//        System.out.println(jeu.nbVoisinesVivantes(new Coord(0,3)));
//        System.out.println(jeu.nbVoisinesVivantes(new Coord(3,3)));
//    }

    public static void main(String[] args) {
        Coord[] coords = {new Coord(0, 3), new Coord(1, 2),
                new Coord(2, 2), new Coord(2, 3),
                new Coord(2, 4)};
        Game jeu = new Game(coords, 5, 5);
        Scanner clavier = new Scanner(System.in);
        int nbGen = 0;
        do {
            System.out.print("Combien de générations voulez-vous étudier ? ");
            try {
                nbGen = clavier.nextInt();
            } catch (InputMismatchException e) {
                clavier.nextLine();
            }
        } while (nbGen <= 0);
// Boucle de calcul et d'affichage des générations
        boolean stable;
        int genCourante = 1;
        do {
            System.out.println("*** Génération " + genCourante + " ***");
            System.out.println(jeu);
            stable = jeu.nextGen();
            genCourante += 1;
        } while (!stable && genCourante <= nbGen);
    }
}
