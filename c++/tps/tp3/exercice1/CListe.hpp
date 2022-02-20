#ifndef LIST_H
#define LIST_H

#pragma once
#include "../../tp2/exercice1/CPersonne.hpp"
#include "CNoeud.hpp"


template <class T>
class CListe {
    CNoeud<T>* tete;
    CNoeud<T>* queue;
    public :
        CListe();
        CListe(CNoeud<T>*, CNoeud<T>*);
        bool ajoute(T*);
        T* recherche(string) const;
        T* supprime(string);
        bool vide() const;
        void affiche() const;
        CNoeud<T>* get_tete() const;
        CNoeud<T>* get_queue() const;
        ~CListe();
};

#endif