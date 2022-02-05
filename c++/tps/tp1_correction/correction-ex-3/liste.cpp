#include "liste.h"
#include <iostream>

using namespace std;
using namespace personne;

bool liste::ajoute(liste::TListe* l, personne::TPersonne* p) {
          liste::TNoeud* n = new liste::TNoeud;
          n->pers = p;
          n->suiv = nullptr;
          n->pred = nullptr; 

          // premier element
          if (l->tete == nullptr) {
              l->tete = n;
              l->queue = n;
          } else {
            // ajoute noued à la fin de la liste 
            if (recherche(l,n->pers->id) != nullptr) {
                return false;
            }
            else {
                l->queue->suiv = n;
                n->pred = l->queue; 
                l->queue = n;
            } 
           }
           return true; 
}

personne::TPersonne* liste::recherche(const liste::TListe* l, const string id) {
      if (vide(l)) {
         cout << "Liste vide !" << endl;
      } else {
         liste::TNoeud* n = l->tete;   
         while (n != nullptr) {    
                if (id == n->pers->id) 
                   return n->pers;
                else  
                   n = n->suiv; 
         }
     } 
     return nullptr;
}

bool liste::vide(const liste::TListe* l) {
     return (l->tete == nullptr && l->queue == nullptr); 
}

void liste::affiche(const liste::TListe* l) {
     if (vide(l)) {
         cout << "Liste vide !" << endl;
     } else {
         liste::TNoeud* n = l->tete;
         while (n != nullptr) {    
                affiche(n->pers);
                n = n->suiv; 
         }
     }
}

personne::TPersonne* liste::supprime(liste::TListe* l, const string id) {
       if (vide(l)) {
          cout << "Liste vide !" << endl;
       } else {
              liste::TNoeud* n = (l->tete);
             // delete the first node of the list 
             if (n->pers->id == id) {
                 l->tete=n->suiv;  
                 return n->pers; // ATTENTION : delete n quelque part, sinon fuite mémoire !
             } else {
                // TODO ;-)
         }
     }
     return nullptr; 
}

void liste::desalloc(liste::TListe* l) {
      if (!vide(l)) { 
         TNoeud* temp = l->tete;
         TNoeud* suiv = nullptr;
         while (temp != nullptr) {
               suiv = temp->suiv; 
               delete temp->pers;
               delete temp;
               temp = suiv;  
         }
         l->tete=nullptr;
   
      }
}
