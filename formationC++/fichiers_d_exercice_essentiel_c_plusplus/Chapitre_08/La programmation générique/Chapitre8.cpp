#include <iostream>
#include <vector>

template<typename IT, typename FUNC>
auto somme(IT begin, IT end, FUNC func) -> int {
	int retval = 0;

	while(begin != end){
		if(func(*begin)) retval += *begin;
	}
	return retval;
}

struct compare {
	bool operator() (int v) {
		return v % 2 == 0;
	}
};

auto main() -> int {

	//int tab[] = { 5,9,7,9,5,1,1,9,20,3,5,3,5,7,3,5,7,7,9,2,3,7,10,10 };

	std::vector<int> vi;

	auto resultat = somme(vi.begin(), vi.end(), compare());
	std::cout << " la somme est " << resultat << std::endl;

	return 0;
}