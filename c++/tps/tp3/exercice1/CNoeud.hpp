#ifndef NOEUD_H
#define NOEUD_H

#pragma once
#include <string>
#include "../../tp2/exercice1/CPersonne.hpp"
using namespace std;

template <class T>
class CNoeud {
    private :
        T* pers;
        CNoeud<T>* pred;
        CNoeud<T>* suiv;
    public:
        CNoeud();
        CNoeud(T* p_pers, CNoeud<T>* p_suiv, CNoeud<T>* p_pred);
        T* get_pers() const;
        CNoeud<T>* get_pred() const;
        CNoeud<T>* get_suiv() const;
        ~ CNoeud();
};

#endif