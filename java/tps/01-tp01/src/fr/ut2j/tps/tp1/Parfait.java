package fr.ut2j.tps.tp1;

import java.util.Scanner;

public class Parfait {

    public static int sommeDiviseurs(int nombre){
        int somme = 1;
        for (int i = 2; i <= nombre/2; i++){
            if (nombre % i == 0){
                somme += i;
            }
        }
        return somme;
    }

    public static void main(String[] args) {
        // lecture d'un nombre au clavier
        Scanner lecteurClavier = new Scanner(System.in);
        System.out.println("entrez un nombre entier strictement supérieur à 2:");
        String nombreLu = lecteurClavier.nextLine();
        int nombre = Integer.parseInt(nombreLu);
        int resNombre = sommeDiviseurs(nombre);
        if (resNombre == nombre){
            System.out.println("le nombre est parfait");
        } else {
            System.out.println("le nombre n'est pas parfait");
        }
    }
}
