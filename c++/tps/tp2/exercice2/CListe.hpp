#pragma once
#include "../exercice1/CPersonne.hpp"
#include "CNoeud.hpp"

class CNoeud;
class CPersonne;

class CListe {
    CNoeud* tete;
    CNoeud* queue;
    public :
        CListe();
        CListe(CNoeud*, CNoeud*);
        bool ajoute(CPersonne*);
        CPersonne* recherche(string) const;
        CPersonne* supprime(string);
        bool vide() const;
        void affiche() const;
        CNoeud* get_tete() const;
        CNoeud* get_queue() const;
        ~CListe();
};

