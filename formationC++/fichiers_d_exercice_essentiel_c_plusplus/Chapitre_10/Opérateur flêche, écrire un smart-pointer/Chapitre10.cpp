
class A {
public:
	void fonction() {}
};

class SPA {
	A* ptr;
public:
	SPA(A* a) : ptr(a) {}
	~SPA() {
		delete ptr;
	}

	A* operator->() {
		return ptr;
	}
};

auto main() -> int {

	SPA ptr{ new A } ;

	ptr->fonction();

	//delete ptr;

	return 0;
}