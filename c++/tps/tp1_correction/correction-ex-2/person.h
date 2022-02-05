#include<string>

namespace personne {

struct TPersonne {
       std::string id;
       std::string nom;
       std::string prenom;
       std::string mail;      
};

TPersonne* new_personne();  
TPersonne* new_personne(std::string,std::string,std::string,std::string);  
void affiche(TPersonne* p);  

}
