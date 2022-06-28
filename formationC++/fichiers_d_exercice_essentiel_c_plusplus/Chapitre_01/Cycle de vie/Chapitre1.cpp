
int globale = 42; // statique -> accessible de tous ?

auto fonction() -> int {
	int locale(42);

	int* dynamique = new int(42); // tas -> dynamique

	// exception ? -> fuite de mémoire

	delete dynamique;

	return locale;
}// locale

auto main() -> int {
	
	int locale(42); // automatique -> pile

	locale = fonction();

	return 0;
}



