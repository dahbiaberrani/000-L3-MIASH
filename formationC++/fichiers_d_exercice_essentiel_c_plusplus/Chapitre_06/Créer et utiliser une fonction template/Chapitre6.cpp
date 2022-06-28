
template<typename type>
type mini(type a, type b) {
	return (a < b) ? a : b;
}

auto main() -> int {

	int mi = mini(4, 5);
	double md = mini(4.5, 5.6);

	return 0;
}