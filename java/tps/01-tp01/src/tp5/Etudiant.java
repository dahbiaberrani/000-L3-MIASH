package tp5;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Etudiant {
    // Attributes

    private String nom;
    private String prenom;
    private int numeroEtudiant;
    private int matiere;

    // constructors

    public Etudiant( String nom, String prenom, int numeroEtudiant, int matiere) {
        this.nom = nom;
        this.prenom = prenom;
        this.numeroEtudiant = numeroEtudiant;
        this.matiere = matiere;
    }

    // getters

    public int getNumeroEtudiant() {
        return numeroEtudiant;
    }

    public int getMatiere() {
        return matiere;
    }

    public String getNom() {
        return nom;
    }
    public String getPrenom() {
        return prenom;
    }

}
