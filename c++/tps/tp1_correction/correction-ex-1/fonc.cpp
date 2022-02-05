#include "fonc.h"
#include <iostream>

using namespace std;

size_t fonctions::strlen_(const char* str) {
       size_t l = 0; // fuite de memoire si pointeur utilisé ;-)
       while (*str != '\0') {
             l=l+1;          
             str=str+1;//sizeof(char);
       }
       return l;  
}

void fonctions::strcpy_(char* destination, const char* source) {
     
     /*while (*destination++=*source++);

     alternativement, avec quelques lignes de code de plus ....

     */
     
     do {
         *destination = *source;
         source = source + 1; //sizeof(char);
         destination = destination + 1; //sizeof(char);            
     } while (*source!='\0');
     *destination = '\0';
     
}

char* fonctions::strncpy_(char *destination, const char *source, size_t num) {
      /* alternativement ... avec ++

      int *cont = new int;
      *cont = num;
      while ((*destination++=*source++) && --(*cont));
      while ((*cont)--) {     
           *destination++ = '\0';
      };
      */

      int *count = new int;
      *count = num;
      while (*count > 0 && *source != '\0') {
             *destination = *source;
             source = source + 1;//sizeof(char);
             destination = destination + 1;//sizeof(char);      
             *count=*count-1;
      }
      *destination = '\0'; 
      while (*count) {
            *count=*count-1; 
            *destination = '\0';
            destination = destination + 1; //sizeof(char); 
      }
      destination-=num;  // pour revenir au début de la chaine
      delete count; 
      return destination;
}

