#include "person.h"

using namespace personne;

int main() {

    TPersonne* p1 = new_personne(); // surcharge
    TPersonne* p2 = new_personne("1","Trojahn","Cassia","cc@tt.fr"); // surcharge

    affiche(p1);
    affiche(p2);
    delete p1;
    delete p2;

    p1=nullptr;
    p2=nullptr;

    return 0; 
}
