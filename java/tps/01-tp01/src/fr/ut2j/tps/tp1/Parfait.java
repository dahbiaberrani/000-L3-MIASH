package fr.ut2j.tps.tp1;

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
        System.out.println(sommeDiviseurs(6));
    }
}
