#include "person.h"
#include <iostream>

using namespace std;

personne::TPersonne* personne::new_personne() {
           personne::TPersonne* p = new personne::TPersonne;
           cout << "Saisissez id : "     << endl;
           cin  >> (*p).id;
           cout << "Saisissez nom : "    << endl;
           cin  >> p->nom;
           cout << "Saisissez prenom : " << endl;
           cin  >> p->prenom;
           cout << "Saisissez mail : "   << endl;
           cin  >> p->mail;
           return p;
}

personne::TPersonne* personne::new_personne(string id,string nom,string prenom,string mail) {
        personne::TPersonne* p = new personne::TPersonne;
        p->id     = id; 
        p->nom    = nom; 
        p->prenom = prenom;
        p->mail   = mail;
        return p;
}

void personne::affiche(personne::TPersonne* p) {
     cout << "ID     : " << (*p).id   << endl;
     cout << "NOM    : " << p->nom    << endl;
     cout << "PRENOM : " << p->prenom << endl;
     cout << "MAIL   : " <<p->mail    << endl;
     cout << endl;
}
