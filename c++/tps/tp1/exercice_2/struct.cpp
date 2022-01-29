#include "struct.hpp"
using namespace std;


void affiche(TPersonne* p_person) {
    cout << "numero etudiant: " << p_person->id;
    cout << endl;
    cout << "nom: " << p_person->nom;
    cout << endl;
    cout << "prenom: " << p_person->prenom;
    cout << endl;
    cout << "email: " << p_person->mail;
    cout << endl;
}

TPersonne* new_personne() {
    TPersonne* p_person = new TPersonne;
    cout << "votre identifiant: ";
    cin >> p_person->id;
    cout << "veuillez rentrez votre nom: ";
    cin >> p_person->nom;
    cout << "veuillez rentrez votre prénom: ";
    cin >> p_person->prenom;
    cout << "veuillez rentrez votre mail: ";
    cin >> p_person->mail;
    
    return p_person;
}