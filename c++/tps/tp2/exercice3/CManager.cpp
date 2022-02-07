#include <string>
#include "CManager.hpp"
#include "../exercice1/CPersonne.hpp"
#include <iostream>
using namespace std;


CManager::CManager() : CPersonne(){
    liste_developpeurs = {};
}

CManager::CManager(string id, string nom, string prenom, string mail) :
CPersonne(id, nom, prenom, mail) {
    liste_developpeurs = {};
}

CManager::~CManager() {
}

CPersonne* CManager::at(int i) {
    return liste_developpeurs.at(i);
}

int CManager::size() {
    return liste_developpeurs.size();
}

vector<CPersonne*> CManager::get_liste_developpeurs() {
    return liste_developpeurs;
}

void CManager::set_developpeurs(vector<CPersonne*> liste) {
    liste_developpeurs = liste;
}

void CManager::add(CPersonne* p_persone) {
    liste_developpeurs.push_back(p_persone);
}
