#include <iostream>
#include<fstream>
using namespace std;

int posx;
int posy;
int main (void) {

    FILE * f;
    
    f = fopen("/home/dahbia/Documents/fichier_bin/Debug_Spy_UART.bin", "rb");
    if (f == NULL)
    cout << "Impossible d'ouvrir le fichier en lecture !" << endl;
    // else {
    //     cout << "fichier bin ouvert";
    //     fclose(f);

    // }
    char c = fgetc(f);
    while (c != 0x55) {
        fread(&posx, sizeof(char),1,f);
        fread(&posy,sizeof(char),1,f);
    printf("commande_get status=%d%d\n",posx,posy);
        fclose(f);
    }


    // ifstream fichier("Debug_Spy_UART.bin", ios::in );  // on ouvre le fichier en lecture

    // if(fichier)  // si l'ouverture a réussi
    // {       
    //     // instructions
    //         fichier.close();  // on ferme le fichier
    // }
    // else  // sinon
    //         cerr << "Impossible d'ouvrir le fichier !" << endl;

    // return 0;

}

