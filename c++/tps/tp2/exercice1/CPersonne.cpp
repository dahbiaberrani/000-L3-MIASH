#include "CPersonne.hpp"
#include "../exercice3/CManager.hpp"
#include "../exercice3/CDeveloppeur.hpp"
#include <string>
#include <iostream>
using namespace std;


CPersonne::CPersonne() {
    id = nullptr;
    nom = nullptr;
    prenom = nullptr;
    mail = nullptr;
}

CPersonne::CPersonne(string id, string nom, string prenom, string mail) {
    CPersonne::id = new string(id);
    CPersonne::nom = new string(nom);
    CPersonne::prenom = new string(prenom);
    CPersonne::mail = new string(mail);
}

CPersonne::~CPersonne() {
    if (this->id != nullptr) {
        delete id;
        id = nullptr;
    } 

    if (this->nom!= nullptr) {
        delete nom;
        nom = nullptr;
    }  

    if (this->prenom != nullptr) {
        delete CPersonne::prenom;
        prenom = nullptr;
    }   

    if (this->mail != nullptr) {
        delete CPersonne::mail;
        mail = nullptr;
    }   
}

void CPersonne::set_id(string _id) {
    if (this->id != nullptr) {
        delete CPersonne::id;
    }
    this->id = new string(_id);
}

void CPersonne::set_nom(string _nom) {
    if (this->nom!= nullptr) {
        delete CPersonne::nom;
    }
    this->nom = new string(_nom);
}

void CPersonne::set_prenom(string _prenom) {
    if (this->prenom != nullptr) {
        delete CPersonne::prenom;
    }
    this->prenom = new string(_prenom);
}

void CPersonne::set_mail(string email) {
    if (this->mail != nullptr) {
        delete CPersonne::mail;
    }
    this->mail = new string(email);
}


string CPersonne::get_id() {
    return *(this->id);
}

string CPersonne::get_nom() {
    return *(this->nom);
}

string CPersonne::get_prenom() {
    return *(this->prenom);
}

string CPersonne::get_mail() {
    return *(this->mail);
}

bool CPersonne::operator==(const CPersonne &other_per) {
    return id == other_per.id &&
           nom == other_per.nom &&
           prenom == other_per.prenom &&
           mail == other_per.mail;
}

ostream& operator<<(ostream& os, const CPersonne& persone) {
    if (CDeveloppeur* p_dev = dynamic_cast<CDeveloppeur*>(const_cast<CPersonne*>(&persone))) {
        os << "id = " << p_dev->get_id() << endl 
        << "nom = " << p_dev->get_nom() << endl 
        << "prenom = " <<  p_dev->get_prenom() << endl 
        << "mail= " << p_dev->get_mail() << endl 
        <<"projet en cours = " << p_dev->get_projet_en_cours() << endl 
        << "mon niveau = " << p_dev->get_niveau() << endl 
        << "---------------------" << endl;
    } else {
        if (CManager* p_man = dynamic_cast<CManager*>(const_cast<CPersonne*>(&persone))) {
        os << "id = " << p_man->get_id()<< endl 
        << "nom = "<< p_man->get_nom() << endl 
        << "prenom = "  << p_man->get_prenom() << endl 
        << "mail= " <<p_man->get_mail() << endl;
        cout << "ma liste de subordonnés :" << endl;
        for (int i = 0; i < p_man->get_liste_developpeurs().size(); i++) {
        os << *(p_man->get_liste_developpeurs().at(i)) << endl;
        }
               
    } else {
        os << "id = " << *persone.id << endl 
        << "nom = "<< *persone.nom << endl 
        << "prenom = "<< *persone.prenom << endl 
        << "mail= " << *persone.mail << endl 
        << "---------------------" << endl;
        }
    }
   
    return os;
}


CPersonne::CPersonne(const CPersonne& other_personne) {
    id = new string(*other_personne.id);
    nom = new string(*other_personne.nom);
    prenom = new string(*other_personne.prenom);
    mail = new string(*other_personne.mail);
}

CPersonne& CPersonne::operator=(const CPersonne& other_personne){
    if (this != &other_personne) {
        // suppresion des anciens elements
        if (this->id != nullptr) {
            delete id;
            id = nullptr;
        } 

        if (this->nom!= nullptr) {
            delete nom;
            nom = nullptr;
        }  

        if (this->prenom != nullptr) {
            delete CPersonne::prenom;
            prenom = nullptr;
        }   

        if (this->mail != nullptr) {
            delete CPersonne::mail;
            mail = nullptr;
        }   

        // initialisation et copie

        id = new string(*other_personne.id);
        nom = new string(*other_personne.nom);
        prenom = new string(*other_personne.prenom);
        mail = new string(*other_personne.mail);             
    }
    return *this;

}