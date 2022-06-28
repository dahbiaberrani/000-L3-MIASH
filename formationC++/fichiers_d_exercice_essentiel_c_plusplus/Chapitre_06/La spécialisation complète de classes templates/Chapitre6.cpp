
template<typename T>
struct est_numerique {
	static const bool valeur = false;
};

template<>
struct est_numerique<int> {
	static const bool valeur = true;
};



template <typename T>
T incremente(T valeur) {

	static_assert(est_numerique<T>::valeur , "Ceci n'est pas un type correct");

	return valeur + 1;
}

auto main() -> int {

	auto v1 = incremente(4);

	auto v2 = incremente("toto");

	return 0;
}