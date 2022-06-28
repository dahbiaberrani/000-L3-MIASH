#pragma once

template<class T>
class Pile {

	T* data;
	int index;

public:
	Pile(int taille);

	void empile(T valeur);

	// à suivre

};

template<typename T>
Pile<T>::Pile(int taille) : index(0) {
	data = new T[taille];
}

template<typename T>
void Pile<T>::empile(T valeur) {
	data[index++] = valeur;
}