
struct Type {

	auto fonction() -> void;

};

auto Type::fonction() -> void {
}

auto fonction() -> void;

auto fonction() -> void {
	//
}

auto main() -> int {

	fonction();

	Type dd;
	dd.fonction();

	return 0;
}

