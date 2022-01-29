#include "struct.hpp"
#include <iostream>
using namespace std;

int main() {

    TPersonne person1;
    person1.id = "0585855";
    person1.nom = "haddad";
    person1.prenom = "Nicolas";
    person1.mail = "haddad.nicolas1988@gmail.com";

    TPersonne* p_person1 = &person1;
    
    affiche(p_person1);

    TPersonne* p_person2;
    cout << "p_person2 avant allocation de mémoire = " << p_person2 << endl;
    p_person2 = new TPersonne;
    cout << "p_person2 après allocation de mémoire = " << p_person2 << endl;
    (*p_person2).id = "69876";
    p_person2->id = "224244";
    affiche(p_person2);
    TPersonne* p_person3 = new_personne();
    affiche(p_person3);


    // Libration de la méroire alouée
    delete p_person2;
    p_person2 = nullptr;
    delete p_person3;
    p_person3 = nullptr;

    return 0;
}