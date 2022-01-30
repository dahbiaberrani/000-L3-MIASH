#include <iostream>
#include "noeud.hpp"


int main() {
    TListe list_1;
    affiche(&list_1);
    TPersonne  personne1;
    personne1.id = "15";
    personne1.nom = "test";

    ajoute(&list_1, &personne1);
    affiche(&list_1);

    TPersonne  personne2;
    personne2.id = "30";
    personne2.nom = "toto";
    ajoute(&list_1, &personne2);
    affiche(&list_1);

    TPersonne  personne3;
    personne3.id = "30";
    personne3.nom = "titi";
    ajoute(&list_1, &personne3);
    affiche(&list_1);
    std::cout << recherche_Id(&list_1, "30") << std::endl;
    
    std::cout << recherche_Id(&list_1, "300") << std::endl;
    return 0;
}