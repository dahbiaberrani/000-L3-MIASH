#include "noeud.hpp"
#include "../exercice_2/person.hpp"


void affiche(const TListe* p_liste) {
    // en recupère la tête de la liste
    TNoeud* p_curr = p_liste->p_tete;
    while(p_curr!=nullptr) {
        // on affiche la personne courante 
        affiche(p_curr->p_pers);
        // on passe au noeud suivant 
        p_curr = p_curr->p_suiv;
    }
    std::cout << "**************************" << std::endl;
}

bool ajoute(TListe* p_liste,TPersonne* p_personne) {
    if (recherche_Id(p_liste, p_personne->id)) {
        return false;
    }
    // si la liste est vide
    TNoeud* p_noeud = new TNoeud;
    p_noeud->p_pers = p_personne;
    if (p_liste->p_tete == nullptr && p_liste->p_queue ==nullptr) {
        p_liste->p_tete = p_noeud;
        p_liste->p_queue = p_noeud;
        p_noeud->p_prec = nullptr;
        p_noeud->p_suiv = nullptr;
    }else {
        //insertion du nouveau noeaud en tête de liste
        p_noeud->p_suiv = p_liste->p_tete;
        p_liste->p_tete->p_prec = p_noeud;
        p_liste->p_tete = p_noeud;
        p_noeud->p_prec = nullptr;
    }

    return true;
}

bool recherche_Id(TListe* p_liste, std::string id) {
    TNoeud* p_curr = p_liste->p_tete;
    bool found = false;
     while(p_curr != nullptr && !found) {
        if (id != p_curr->p_pers->id) {
            p_curr = p_curr->p_suiv;
        } else {
            found = true;
        }
    }
    return found;

}