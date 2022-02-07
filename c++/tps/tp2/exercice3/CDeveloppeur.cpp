#include "CDeveloppeur.hpp"
#include "../exercice1/CPersonne.hpp"
#include <string>
#include <iostream>
using namespace std;


CDeveloppeur::CDeveloppeur() : CPersonne() {
    projet_en_cours = "aucun";
    niveau = 0;
}


CDeveloppeur::CDeveloppeur(
    string id,
    string nom,
    string prenom,
    string mail,
    string projet_en_cours,
    short niveau
    ) : CPersonne(id, nom, prenom, mail) {
        projet_en_cours = projet_en_cours;
        niveau = niveau;

}   

CDeveloppeur::~CDeveloppeur() {

}

void CDeveloppeur::set_projet_en_cours(string projet) {
    projet_en_cours = projet;

}

void CDeveloppeur::set_niveau(string niveau) {
    niveau = niveau;

}

string CDeveloppeur::get_projet_en_cours() {
    return projet_en_cours;
}

short CDeveloppeur::get_niveau() {
    return niveau;
}

// Redéfinition de l'affichage
ostream& operator<<(ostream& os, const CDeveloppeur& developpeur) {
    os << static_cast<const CPersonne&>(developpeur)
        << " Projet en cours : " << developpeur.projet_en_cours << endl
        << " Niveau : " << developpeur.niveau << endl 
        << "---------------------" << endl;
    return os;
}
