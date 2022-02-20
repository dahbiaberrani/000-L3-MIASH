#include "CListe.hpp"
#include "../../tp2/exercice1/CPersonne.hpp"
#include "../../tp2/exercice3/CDeveloppeur.hpp"
#include "../../tp2/exercice3/CManager.hpp"

#include <string>
#include <iostream>
using namespace std;

template <class T> CListe<T>::CListe(){
    tete = nullptr;
    queue = nullptr;
}

 template <class T> CListe<T>::CListe(CNoeud<T>* p_noeud1, CNoeud<T>* p_noeud2) {
    tete = p_noeud1;
    queue = p_noeud2;
    p_noeud1->suiv = p_noeud2;
    p_noeud1->pred = nullptr;
    p_noeud2->pred = p_noeud1;
    p_noeud2->suiv = nullptr;
}

 template <class T>CListe<T>::~CListe(){
    CNoeud<T> *p_curr = this->tete;
    while (this->tete != nullptr) {
        p_curr = p_curr->suiv;
        delete (this->tete);
        this->tete = p_curr;
    }
    this->queue = nullptr;
}

template <class T> CNoeud<T>* CListe<T>::get_tete() const {
    return tete;
}

template <class T> CNoeud<T>* CListe<T>::get_queue() const {
    return queue;
}

template <class T> bool CListe<T>::vide() const {
    if (tete == nullptr && queue == nullptr) {
        return true;
    } else {
        return false;
    }
}

template <class T> void CListe<T>::affiche() const {
    if (vide()) {
        cout << "la liste est vide" << endl;
    }
    CNoeud<T> *p_curr = this->tete;
    while (p_curr != nullptr) {
        // on affiche la personne courante 
        // Si la personne est un developpeur
        if (CDeveloppeur* p_dev = (CDeveloppeur*)p_curr->pers) {
            cout <<  *p_dev;
        } else {
            cout << *p_curr->pers;
        }
        
        // on passe au noeud suivant 
        p_curr = p_curr->suiv;
    }
    std::cout << "**************************" << std::endl;
}

template <class T> T* CListe<T>::recherche(string id) const {
    CNoeud<T>* p_curr = this->tete;
    bool found = false;
    CPersonne* p_found_personne = nullptr;
    while (!found && p_curr != nullptr) {
        if (id != *(p_curr->pers->id)) {
            p_curr = p_curr->suiv;
        } else {
            found = true;
            p_found_personne = p_curr->pers;
        }
    }
    return p_found_personne;
}

template <class T> bool CListe<T>::ajoute(T* p_personne) {
    if (this->recherche(*(p_personne->id)) != nullptr) {
        return false;
    }

    CNoeud<T>* p_noeud = new CNoeud<T>(p_personne, nullptr, nullptr);
    // si la liste est vide
    if (vide()) {
        this->tete = p_noeud;
        this->queue = p_noeud;
    } else {
        //insertion du nouveau noeud en tête de liste
        p_noeud->suiv = this->tete;
        this->tete->pred = p_noeud;
        this->tete = p_noeud;
    }

    return true;
    
}

template <class T> T* CListe<T>::supprime(string id) {
        // si la liste est vide 
    T* p_personne = nullptr;
    if (this->recherche(id) == nullptr) {
        return p_personne;
    }

    // si le noeud à supprimer est la tête de liste
    if (*(this->tete->pers->id) == id) {
        CNoeud<T>* p_curr = this->tete;
        p_personne = this->tete->pers;
        this->tete = p_curr->suiv;
        p_curr->suiv = nullptr;
        delete p_curr;
        return p_personne;
    }

    // si le noeud à supprimer est à la queue de la liste 
    if (*(this->queue->pers->id) == id) {
        p_personne = this->queue->pers;
        CNoeud<T> *p_curr = this->queue;
        this->queue = p_curr->pred;
        this->queue->suiv = nullptr;
        delete p_curr;
        return p_personne;
    }

    // si le noeud il est au millieu de la liste
    //recherche id de personee à supprimer
    CNoeud<T>* p_curr = this->tete;
    CNoeud<T> *p_found_noeud = nullptr;
    bool found = false;
    while (!found && p_curr != nullptr) {
        if (id != *(p_curr->pers->id)) {
            p_curr = p_curr->suiv;
        } else {
            found = true;
            p_found_noeud = p_curr;
            p_found_noeud->pred->suiv = p_found_noeud->suiv;
            p_found_noeud->suiv->pred = p_found_noeud->pred;
            p_personne = p_found_noeud->pers;
        }
    }
    
    return p_personne;
}

   
