#include "Cpersonne.hpp"
#include <iostream>

using namespace std;

int main() {
   
    // Cpersonne personne1 = Cpersonne("85485", "toto","titi", "email@domaine.com");
    Cpersonne personne1 =  Cpersonne();
    personne1.set_id("4585");
    cout << personne1.get_id() << endl;

    return 0;
}