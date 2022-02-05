#pragma once
#include <string>
using namespace std;


class Cpersonne {
    string *id, *nom, *prenom, *mail;

    public:
        Cpersonne();
        Cpersonne(string id,string nom,string prenom,string mail);
        void set_id(string id);
        void set_nom(string nom);
        void set_prenom(string prenom);
        void set_mail(string mail);
        string get_id();
        string get_nom();
        string get_prenom();
        string get_mail();
        ~Cpersonne();
    
};