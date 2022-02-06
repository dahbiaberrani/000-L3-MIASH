#pragma once
#include <string>
#include "../exercice1/CPersonne.hpp"
using namespace std;

class CNoeud {
    friend class CListe;
    private :
        CPersonne* pers;
        CNoeud* pred;
        CNoeud* suiv;
    public:
        CNoeud();
        CNoeud(CPersonne* p_pers, CNoeud* p_suiv, CNoeud* p_pred);
        CPersonne* get_pers() const;
        CNoeud* get_pred() const;
        CNoeud* get_suiv() const;
        ~ CNoeud();
};

