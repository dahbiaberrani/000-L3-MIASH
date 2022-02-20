#pragma once
#include <string>
using namespace std;


class CPersonne {
    friend class CListe;
    private:
        string *id, *nom, *prenom, *mail;

    public:
        CPersonne();
        CPersonne(string id,string nom,string prenom,string mail);
        void set_id(string id);
        void set_nom(string nom);
        void set_prenom(string prenom);
        void set_mail(string mail);
        string get_id();
        string get_nom();
        string get_prenom();
        virtual string get_mail();
        ~CPersonne();
        friend  ostream& operator<<(ostream& os, const CPersonne& persone);
        bool operator==(const CPersonne &other_per);
        CPersonne(const CPersonne& other_personne);
        CPersonne& operator=(const CPersonne& other_personne);
};