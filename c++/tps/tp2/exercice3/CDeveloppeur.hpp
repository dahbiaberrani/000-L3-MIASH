#pragma once
#include <string>
#include "../exercice1/CPersonne.hpp"
using namespace std;


class CDeveloppeur : public CPersonne {
    private: 
        string projet_en_cours; 
        short niveau;
    public:
        using CPersonne::CPersonne;
        CDeveloppeur();
        CDeveloppeur(string id, string nom, string prenom, string mail, string projet_en_cours, short niveau);
        ~CDeveloppeur();

        void set_projet_en_cours(string projet);
        void set_niveau(string niveau);

        string get_projet_en_cours();
        short get_niveau();

        friend ostream& operator<<(ostream& os, const CDeveloppeur& developpeur);

};