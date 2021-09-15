package fr.ut2j.tps.tp1;

import java.util.Scanner;

public class Parfait {

    public static int sommeDiviseurs(int nombre) {
        int somme = 1;
        for (int i = 2; i <= nombre/2; i++){
            if (nombre % i == 0){
                somme += i;
            }
        }
        return somme;
    }
    public static int sommeDiviseurs1(int nombre) {
        int somme = 1;
        for (int i = 2; i <= Math.sqrt(nombre); i++){
            if (nombre % i == 0){
                somme += i + (nombre/i);
            }
        }
        return somme;
    }

    public static boolean estParfait(int nombre) {
       return (sommeDiviseurs1(nombre) == nombre);
    }

    public static void main(String[] args) {
        // lecture d'un nombre au clavier
        Scanner lecteurClavier = new Scanner(System.in);
        System.out.println("entrez un nombre entier strictement supérieur à 2:");
        String nombreLu = lecteurClavier.nextLine();
        try {
            int nombre = Integer.parseInt(nombreLu);
            if (nombre > 2) {
                if (estParfait(nombre)) {
                    System.out.println("le nombre est parfait");
                } else {
                    System.out.println("le nombre n'est pas parfait");
                }
            } else {
                System.out.println("le nombre doit etre suppérieur à 2!");
            }
        }catch (Exception e){
            System.out.println("Ceci n'est pas un nombre!");
        }

//        System.out.println(sommeDiviseurs1(1500));
//        System.out.println(sommeDiviseurs(1500));
    }
}
