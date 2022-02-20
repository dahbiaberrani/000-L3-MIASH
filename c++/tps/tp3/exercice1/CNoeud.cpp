#include "CNoeud.hpp"
#include <string>
#include <iostream>
using namespace std;



template <class T> CNoeud<T>::CNoeud() {
    pers = nullptr;
    suiv = nullptr;
    pred = nullptr;
}

template <class T> CNoeud<T>::CNoeud(T* p_pers, CNoeud<T>* p_suiv, CNoeud<T>* p_pred) {
    pers = p_pers;
    suiv = p_suiv;
    pred = p_pred;
}


template <class T> T* CNoeud<T>::get_pers() const {
    return pers;
}


template <class T> CNoeud<T>* CNoeud<T>::get_pred() const {
    return pred;
}

template <class T> CNoeud<T>* CNoeud<T>::get_suiv() const {
    return suiv;
}


template <class T>CNoeud<T>::~CNoeud() {
}



