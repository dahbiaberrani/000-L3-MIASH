#include "noeud.hpp"
#include "../exercice_2/person.hpp"

TPersonne *recherche_Id(TListe *p_liste, std::string id) {
    TNoeud *p_curr = p_liste->p_tete;
    bool found = false;
    TPersonne *p_found_personne = nullptr;
    while (!found && p_curr != nullptr) {
        if (id != p_curr->p_pers->id) {
            p_curr = p_curr->p_suiv;
        } else {
            found = true;
            p_found_personne = p_curr->p_pers;
        }
    }
    return p_found_personne;

}

TNoeud *recherche_noeud_id(TListe *p_liste, std::string id) {
    TNoeud *p_curr = p_liste->p_tete;
    bool found = false;
    TNoeud *p_found_noeud = nullptr;
    while (!found && p_curr != nullptr) {
        if (id != p_curr->p_pers->id) {
            p_curr = p_curr->p_suiv;
        } else {
            found = true;
            p_found_noeud = p_curr;
        }
    }
    return p_found_noeud;

}

void affiche(const TListe *p_liste) {
    // en recupère la tête de la liste
    TNoeud *p_curr = p_liste->p_tete;
    while (p_curr != nullptr) {
        // on affiche la personne courante 
        affiche(p_curr->p_pers);
        // on passe au noeud suivant 
        p_curr = p_curr->p_suiv;
    }
    std::cout << "**************************" << std::endl;
}

bool ajoute(TListe *p_liste, TPersonne *p_personne) {
    if (recherche_Id(p_liste, p_personne->id) != nullptr) {
        return false;
    }

    TNoeud *p_noeud = new TNoeud;
    p_noeud->p_pers = p_personne;
    // si la liste est vide
    if (p_liste->p_tete == nullptr && p_liste->p_queue == nullptr) {
        p_liste->p_tete = p_noeud;
        p_liste->p_queue = p_noeud;
        p_noeud->p_prec = nullptr;
        p_noeud->p_suiv = nullptr;
    } else {
        //insertion du nouveau noeud en tête de liste
        p_noeud->p_suiv = p_liste->p_tete;
        p_liste->p_tete->p_prec = p_noeud;
        p_liste->p_tete = p_noeud;
        p_noeud->p_prec = nullptr;
    }

    return true;
}

TPersonne *supprime(TListe *p_liste, const std::string id) {

    // si la liste est vide 
    TPersonne *p_personne = nullptr;
    if (recherche_Id(p_liste, id) == nullptr) {
        return p_personne;
    }

    // si le noeud à supprimer est la tête de liste
    if (p_liste->p_tete->p_pers->id == id) {
        TNoeud *p_curr = p_liste->p_tete;
        p_personne = p_liste->p_tete->p_pers;
        p_liste->p_tete = p_curr->p_suiv;
        p_curr->p_suiv = nullptr;
        delete p_curr;
        return p_personne;
    }


    // si le noeud à supprimer est à la queue de la liste 
    if (p_liste->p_queue->p_pers->id == id) {
        p_personne = p_liste->p_queue->p_pers;
        TNoeud *p_curr = p_liste->p_queue;
        p_liste->p_queue = p_curr->p_prec;
        p_liste->p_queue->p_suiv = nullptr;
        delete p_curr;
        return p_personne;
    }


    // si le noeud il est au millieu de la liste
    TNoeud *p_curr = recherche_noeud_id(p_liste, id);
    p_curr->p_prec->p_suiv = p_curr->p_suiv;
    p_curr->p_suiv->p_prec = p_curr->p_prec;
    p_personne = p_curr->p_pers;
    delete p_curr;
    return p_personne;
}

void desalloc(TListe *p_liste) {
    TNoeud *p_curr = p_liste->p_tete;
    while (p_liste->p_tete != nullptr) {
        p_curr = p_curr->p_suiv;
        delete (p_liste->p_tete);
        p_liste->p_tete = p_curr;
    }
    p_liste->p_queue = nullptr;
}