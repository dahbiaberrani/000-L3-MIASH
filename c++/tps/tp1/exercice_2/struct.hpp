#pragma once
#include <iostream>
#include <string>


typedef struct {
std::string id;
std::string nom;
std::string prenom;
std::string mail;
} TPersonne ;

void affiche(TPersonne* p_person);
TPersonne* new_personne();