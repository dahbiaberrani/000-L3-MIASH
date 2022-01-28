#include "strcpy.hpp"
#include <iostream>

int main() {

	//test la fonction strlen_
	std::cout << strlen_("Exemple chaîne de caractères") << std::endl;


	// test proposer dans la tp pour la fonction strcpy_ 
	char str1 []=" Exemple chaîne de caractères";
	char str2 [32];
	char str3 [32];
	strcpy_( str2 , str1 );
	strcpy_( str3 ,"Un autre exemple");
	std::cout << str3 << std::endl;
	std::cout << str2 << std::endl;


	char v[] = "ça c'est mon propos test à moi";
	char copy[50];
	strcpy_(copy,v);
	std::cout << copy << std::endl;

	// test la fonction 
	char str4 []= "Exemple chaîne de caractères" ;
	char str5 [15];
	char str6 [15];
	// overflow safe
	strncpy_( str5 , str4, sizeof ( str5 ) ) ;
	strncpy_( str6 , "toto", 8) ;
	str6 [8] = '\0';
	std::cout << "STR6 = " << str6 << std::endl;

	return 0;


}