#include "CPersonne.hpp"
#include <iostream>

using namespace std;

int main() {
 
    CPersonne p1 { " 1 " ," Trojahn " ," Cassia " ," cassia . trojahn@irit . fr " };
    cout << "affichage de p1 " << p1;
    CPersonne p2 = p1 ;
    cout << "p2 = p1 donc p2 :" << endl << p2;
    CPersonne p3 ;
    p3 = p1 ;
    cout << "p3 = p1 donc p3 :" << endl << p3;

    CPersonne p4 ;
    p4 = CPersonne ( " 2 " ," Clemente " ," Gilles " ," gilles@cc . fr " ) ;
    cout << "affichage de p4 " << endl << p4;
    return 0;
}