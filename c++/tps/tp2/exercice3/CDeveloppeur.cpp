#include "CDeveloppeur.hpp"
#include "../exercice1/CPersonne.hpp"
#include <string>
#include <iostream>
using namespace std;


CDeveloppeur::CDeveloppeur() : CPersonne() {
    projet_en_cours = nullptr;
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
        this->projet_en_cours = new string(projet_en_cours);
        this->niveau = niveau;

}   

CDeveloppeur::~CDeveloppeur() {
    if (projet_en_cours) {
        delete projet_en_cours;
        projet_en_cours = nullptr;
    }
}

void CDeveloppeur::set_projet_en_cours(string projet) {
    projet_en_cours = new string(projet);

}

void CDeveloppeur::set_niveau(string niveau) {
    niveau = niveau;

}

string CDeveloppeur::get_projet_en_cours() {
    return *projet_en_cours;
}

short CDeveloppeur::get_niveau() {
    return niveau;
}
