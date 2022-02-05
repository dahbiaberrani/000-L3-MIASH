#include <iostream>
#include "fonc.h"
#include <cstring>

using namespace std;
using namespace fonctions;

int main() {
    char str1[] = "exemple chaine de caracteres"; // Attention : si accent, la taille du tableau peut changer
    char str2[30];
    char str3[30];
    char str4[10];
    
    strcpy(str2,str1);
    cout << "V1 \"" << str1 << "\" copie dans \"" << str2 << "\"" << endl;
 
    strcpy_(str2,str1);
    cout << "V2 \"" << str1 << "\" copie dans \"" << str2 << "\"" << endl;

    strcpy_(str3,"un autre exemple");
    cout << "Taille \"" << str2 << "\" " << strlen_(str2) << endl;
    cout << "Taille \"" << str3 << "\" " << strlen_(str3) << endl;

    /* copy to sized buffer (overflow safe): */
    strncpy_(str2,str1,sizeof(str2));
    cout << "Taille \"" << str2 << "\" " << strlen(str2) << endl;
 
    strncpy_(str4,str1,7);
    cout << "Taille \"" << str4 << "\" " << strlen_(str4) << endl;
  
    char *temp = strncpy_(str2,str3,9); 
    cout << "Taille \"" << str2 << "\" " << strlen_(str2) << endl;
   
    return 0;
}
