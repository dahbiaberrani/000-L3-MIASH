#pragma once
#include <iostream>
#include <string>
#include "../exercice_2/person.hpp"

typedef struct TNoeud {
    TPersonne* p_pers;
    TNoeud* p_prec;
    TNoeud* p_suiv;
} TNoeud;

typedef struct {
    TNoeud* p_tete = nullptr;
    TNoeud* p_queue = nullptr;
} TListe;

/**
 * @brief fonction qui affiche toutes les personnes de la liste
 * 
 * @param p_liste pointeur vers la liste
 */
void affiche(const TListe*);

/**
 * @brief ajoute une personne dans la liste
 * 
 * @param p_liste un pointeur vers la liste dans laquelle on doit rajouter la personne
 * @param p_personne un pointeur vers la personne qu'on doit rajouter
 * @return false si une personne portant le même id que la personne à rajouter existe déjâ dans la liste
 * @return true si la personne a été bien rajoutée à la liste
 */
bool ajoute(TListe* p_liste,TPersonne* p_personne);


/**
 * @brief supprime de la liste l'objet TPersonne contenant id.
 * 
 * @param p_liste un pointeur vers la liste dans laquelle on doit supprimer la personne si il existe
 * @param id identifiant de la personne à supprimer
 * @return un pointeur vers la personne retenue dans le noeud à supprimer si il existe
 *          ou retroune un nullptr si la personne n''existe pas  
 */
TPersonne* supprime(TListe* p_liste, const std::string id);

/**
 * @brief libère toute la méroire allouée pour les noeuds de la liste.
 * 
 * @param p_liste un pointeur vers la liste des noeuds.
 */
void desalloc(TListe* p_liste);