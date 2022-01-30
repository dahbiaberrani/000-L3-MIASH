#include <iostream>
#include "noeud.hpp"


int main() {
    TListe list_1;
    affiche(&list_1);
    TPersonne  personne1;
    personne1.id = "15";
    personne1.nom = "test";

    ajoute(&list_1, &personne1);


    TPersonne  personne2;
    personne2.id = "30";
    personne2.nom = "toto";
    ajoute(&list_1, &personne2);
   

    TPersonne  personne3;
    personne3.id = "30";
    personne3.nom = "titi";
    ajoute(&list_1, &personne3);


    TPersonne  personne4;
    personne4.id = "40";
    personne4.nom = "tata";
    ajoute(&list_1, &personne4);

    TPersonne  personne5;
    personne5.id = "50";
    personne5.nom = "tutu";
    ajoute(&list_1, &personne5);
    affiche(&list_1);


    // spression
    std::cout << "---------------------" << std::endl << "la pesonne suivante a été suprimmée:" << std::endl;
    affiche(supprime(&list_1, "30"));
    std::cout << "---------------------" << std::endl << "la pesonne suivante a été suprimmée:" << std::endl;
    affiche(supprime(&list_1, "15"));
    std::cout << "---------------------" << std::endl;
     std::cout << "ma liste après la suppresion deux personne" << std::endl;
    affiche(&list_1);



    // std::cout << recherche_Id(&list_1, "30") << std::endl;
    
    // std::cout << recherche_Id(&list_1, "300") << std::endl;
    return 0;
}