#include "../correction-ex-2/person.h"

namespace liste {
          
         
          struct TNoeud {
                 personne::TPersonne* pers;
                 TNoeud* suiv;
                 TNoeud* pred;
          }; 

          struct TListe {
                 TNoeud* tete;
                 TNoeud* queue;
          };    

          bool ajoute(TListe* l, personne::TPersonne* n);
          personne::TPersonne* recherche(const TListe* l, const std::string id);
          personne::TPersonne* supprime(TListe* l, const std::string id);
          bool vide(const TListe* l);
          void affiche(const TListe* l);
          void desalloc(TListe* l);
}
