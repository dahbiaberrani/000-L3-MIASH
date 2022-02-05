#include "Cpersonne.hpp"
#include <string>
using namespace std;

Cpersonne::Cpersonne() {
    id = nullptr;
    nom = nullptr;
    prenom = nullptr;
    mail = nullptr;
}

Cpersonne::Cpersonne(string id, string nom, string prenom, string mail) {
    Cpersonne::id = new string(id);
    Cpersonne::nom = new string(nom);
    Cpersonne::prenom = new string(prenom);
    Cpersonne::mail = new string(mail);
}

Cpersonne::~Cpersonne() {
    if (this->id != nullptr) {
        delete id;
        id = nullptr;
    } 

    if (this->nom!= nullptr) {
        delete nom;
        nom = nullptr;
    }  

    if (this->prenom != nullptr) {
        delete Cpersonne::prenom;
        prenom = nullptr;
    }   

    if (this->mail != nullptr) {
        delete Cpersonne::mail;
        mail = nullptr;
    }   
}

void Cpersonne::set_id(string _id) {
    if (this->id != nullptr) {
        delete Cpersonne::id;
    }
    this->id = new string(_id);
}

void Cpersonne::set_nom(string _nom) {
    if (this->nom!= nullptr) {
        delete Cpersonne::nom;
    }
    this->nom = new string(_nom);
}

void Cpersonne::set_prenom(string _prenom) {
    if (this->prenom != nullptr) {
        delete Cpersonne::prenom;
    }
    this->prenom = new string(_prenom);
}

void Cpersonne::set_mail(string email) {
    if (this->mail != nullptr) {
        delete Cpersonne::mail;
    }
    this->mail = new string(email);
}


string Cpersonne::get_id() {
    return *(this->id);
}

string Cpersonne::get_nom() {
    return *(this->nom);
}

string Cpersonne::get_prenom() {
    return *(this->prenom);
}

string Cpersonne::get_mail() {
    return *(this->mail);
}