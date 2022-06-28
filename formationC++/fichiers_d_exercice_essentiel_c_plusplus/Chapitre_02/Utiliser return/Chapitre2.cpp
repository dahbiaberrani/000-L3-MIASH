
auto fonction() -> int {
	int retval = 0;

	// 

	for (int i = 0; i < 10; i++) {

		if (i > 5) retval = i;
		else if (i < 4) retval= i % 2;
	}

	//

	return retval;
}

auto main() -> int {

	fonction();

	return 0;
}