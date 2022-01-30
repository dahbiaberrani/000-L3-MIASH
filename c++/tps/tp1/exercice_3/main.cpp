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
    // tentative de suppression d'une personne qui n'existe pas
    supprime(&list_1, "523");
    std::cout << "---------------------" << std::endl;
    std::cout << "ma liste après la suppresion deux personne" << std::endl;
    affiche(&list_1);


    // dans l'énnoncé il est dit que pour finir l'exrecice il faut modifier la fonction "ajoute_noeud" sauf que cette fonction n'a jamais existée dans le tp.
    // Du coup impossible de modifier un code qui n'existe pas.


    //libration des méroire allouée pour les noeuds de la liste.
    desalloc(&list_1);
    return 0;
}