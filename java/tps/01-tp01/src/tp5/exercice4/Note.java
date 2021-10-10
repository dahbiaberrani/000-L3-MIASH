package tp5;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Note {
    // attributes

    private float value;
    private  String matiere;

    // constructors

    public Note(String matiere,float note) {
        this.matiere = matiere;
        this.value = note;
    }

    // getters

    public float getValue() {
        return value;
    }

    public String getNomMatiere() {
        return matiere;
    }


}
