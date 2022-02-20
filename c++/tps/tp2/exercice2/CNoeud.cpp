#include "CNoeud.hpp"
#include <string>
#include <iostream>
using namespace std;


CNoeud::CNoeud() {
    pers = nullptr;
    suiv = nullptr;
    pred = nullptr;
}

CNoeud::CNoeud(CPersonne* p_pers, CNoeud* p_suiv, CNoeud* p_pred) {
    pers = p_pers;
    suiv = p_suiv;
    pred = p_pred;
}

CPersonne* CNoeud::get_pers() const {
    return this->pers;
}

CNoeud* CNoeud::get_pred() const {
    return pred;
}

CNoeud* CNoeud::get_suiv() const {
    return suiv;
}

CNoeud::~CNoeud() {
}
