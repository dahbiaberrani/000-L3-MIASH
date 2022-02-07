#include "../exercice2/CNoeud.hpp"
#include "../exercice2/CListe.hpp"
#include "../exercice1/CPersonne.hpp"
#include "CDeveloppeur.hpp"
#include "CManager.hpp"
#include <string>
#include <iostream>
using namespace std;



int main() {
    CPersonne personne1 = CPersonne("22", "dahbia", "haddad", "dahbia.haddad@gmail.com");
    CPersonne personne2 = CPersonne("33", "dabia", "berani", "dahbia.berani@gmail.com");
    CPersonne personne3 = CPersonne("44", "lili", "ama", "lili.ama@gmail.com");
    CPersonne personne4 = CPersonne("55", "sara", "ama", "sara.ama@gmail.com");

    CDeveloppeur developpeur1 = CDeveloppeur("1", "ingenieur c++", "dev1", "ingenierC++.deomaine@", "application_mobile", 4);
    CDeveloppeur developpeur2 = CDeveloppeur("2", "ingenieur java", "dev2", "ingenierJava.deomaine@", "application_java", 3);
    cout << developpeur2;
    
    CManager manager1 = CManager("10", "manager1", "managEquipe c++", "managerc++@domain.com");
    manager1.add(&developpeur1);
    manager1.add(&developpeur2);
    cout << manager1;

    CListe liste = CListe();
    liste.ajoute(&personne1);
    liste.ajoute(&personne2);
    liste.ajoute(&personne3);
    liste.ajoute(&personne4);
    liste.ajoute(&developpeur1);
    liste.ajoute(&developpeur2);
    // liste.ajoute(&manager1);

    // liste.affiche();
    return 0;
}