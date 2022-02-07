#pragma once
#include <string>
#include <vector>
#include "../exercice1/CPersonne.hpp"
using namespace std;


class CManager : public CPersonne {
    private:
        vector<CPersonne*> liste_developpeurs;

    public:
        CManager();
        CManager(string id, string nom, string prenom, string mail);
        ~CManager();
        CPersonne* at(int i);
        int size();

        void set_developpeurs(vector<CPersonne*> liste);
        void add(CPersonne* p_persone);

        vector<CPersonne*> get_liste_developpeurs();
};


