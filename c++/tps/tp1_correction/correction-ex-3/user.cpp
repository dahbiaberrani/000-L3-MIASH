#include "liste.h"
#include <iostream>

using namespace personne;
using namespace liste;
using namespace std;

int main() {

    TPersonne* p1 = new_personne ("1","Trojahn","Cassia","cassia.trojahn@irit.fr");
    TPersonne* p2 = new_personne ("2","Arnaud","Marie","marie.vv@bidon.fr");
    TPersonne* p3 = new_personne ("3","Clemente","Gilles","gilles@aaa.fr");
   
    TListe* l = new TListe;
    l->tete=nullptr;
    l->queue=nullptr;

    ajoute(l,p1);
    ajoute(l,p2);
    ajoute(l,p3);

    affiche(l);
        
    if (!ajoute(l,p3)) {
       cout << "Noeud " << p3->id <<" deja dans la liste !" << endl << endl;  
    }
  
    TPersonne* p = recherche(l,"2");
    if (p != nullptr) {
        affiche(p); 
    }

    TPersonne* temp = supprime(l,"1");
    delete temp;
    affiche(l);

    desalloc(l);

    affiche(l);
    delete l;
    l = nullptr;

    return 0; 
}
