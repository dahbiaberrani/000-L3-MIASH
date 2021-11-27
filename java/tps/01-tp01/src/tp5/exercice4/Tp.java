package tp5;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import java.util.HashMap;
import java.util.Vector;

public class Tp {
    // Attributes

    private Vector<Etudiant> listeEtudiants;
    private String groupe;

    // constructors

    public Tp(String nomGroupe) {
        this.listeEtudiants = new Vector<>();
        this.groupe = nomGroupe;
    }

    //methods

    public void addEtudiant(Etudiant e) {
        this.listeEtudiants.add(e);
    }

    @Override
    public String toString() {
        String separator = "\t\t\t";
        String resultatAffichage = "";
        for (int i = 0; i< listeEtudiants.size(); i++) {
            Etudiant etudiantCourant = listeEtudiants.get(i);
            Vector <Note> listNoteEtudiantCourant = etudiantCourant.getListeNotes();
            if (i == 0) {
                // Affichage de l'entête du tableau si c'est le premier étudiant que nous sommes entrain d'
                resultatAffichage += "Nom" + separator + "Prénom" + separator;

                for (int  j = 0; j < etudiantCourant.getNombreMatière(); j++) {
                    resultatAffichage += listNoteEtudiantCourant.get(j).getNomMatiere() + separator;
                }
                resultatAffichage += "\n";
            }
            //Affichage des notes de l'etudiant courant
            resultatAffichage += etudiantCourant.getNom() + separator + etudiantCourant.getPrenom() + separator;
            for (int  j = 0; j < etudiantCourant.getNombreMatière(); j++) {
                resultatAffichage += listNoteEtudiantCourant.get(j).getValue() + separator;
            }
            resultatAffichage += "\n";
        }
        return  resultatAffichage;
    }



    public static void main(String[] args) {
        Etudiant e1 = new Etudiant("Solo","Louiza",1);
        Etudiant e2 = new Etudiant("Berra","nicolas",2);
        e1.addNote(new Note("mathématique",15));
        e1.addNote(new Note("physique",20));
        e2.addNote(new Note("mathématique",20));
        e2.addNote(new Note("physique",20));
        Tp groupe1 = new Tp("G1");
        groupe1.listeEtudiants.add(e1);
        groupe1.listeEtudiants.add(e2);
        System.out.println(groupe1);
    }
}
