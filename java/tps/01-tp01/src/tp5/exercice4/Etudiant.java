package tp5;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import java.util.Vector;

public class Etudiant {
    // Attributes

    private String nom;
    private String prenom;
    private int numeroEtudiant;
    private Vector<Note> listeNotes;



    // constructors

    public Etudiant( String nom, String prenom, int numeroEtudiant) {
        this.nom = nom;
        this.prenom = prenom;
        this.numeroEtudiant = numeroEtudiant;
        this.listeNotes = new Vector<>();
    }

    // getters

    public int getNumeroEtudiant() {
        return numeroEtudiant;
    }
    public String getNom() {
        return nom;
    }
    public String getPrenom() {
        return prenom;
    }

    public Vector getListeNotes() {
        return this.listeNotes;
    }

    //methods

    public void addNote(Note note) {
        this.listeNotes.add(note);
    }

    public int getNombreMatière() {
        return this.listeNotes.size();
    }










}
