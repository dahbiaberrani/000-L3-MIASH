#include "CNoeud.hpp"
#include "CListe.hpp"
#include "../exercice1/CPersonne.hpp"
#include <string>
#include <iostream>
using namespace std;



int main() {



    CNoeud<int> noeud1;
   
    CListe<int> liste_entier (nullptr,nullptr);
    int numbre1 = 100;
    int numbre2 = 50;
    int numbre3 = 80;

 
    liste_entier.ajoute(&numbre1);
    liste_entier.ajoute(&numbre2);
    liste_entier.ajoute(&numbre3);

    liste_entier.affiche();  






    CPersonne personne1 = CPersonne("22", "dahbia", "haddad", "dahbia.haddad@gmail.com");
    CPersonne personne2 = CPersonne("33", "dabia", "berani", "dahbia.berani@gmail.com");
    CPersonne personne3 = CPersonne("44", "lili", "ama", "lili.ama@gmail.com");
    CPersonne personne4 = CPersonne("55", "sara", "ama", "sara.ama@gmail.com");


    
    cout << "test la fonction ajouter et afficher" << endl;

    CListe<CPersonne> liste =  CListe<CPersonne>();
    liste.ajoute(&personne1);
    liste.ajoute(&personne2);
    liste.ajoute(&personne3);
    liste.ajoute(&personne4);
    liste.affiche();

    cout << "test la fonction supprimer" << endl;

    CPersonne persone = *liste.supprime("33");
    cout << "je suis la personne supprimer" << endl << persone;

    return 0;
}