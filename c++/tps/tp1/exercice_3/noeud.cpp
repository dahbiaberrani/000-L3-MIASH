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
}

bool ajoute(TListe* p_liste,TPersonne* p_personne) {
    return true;

}