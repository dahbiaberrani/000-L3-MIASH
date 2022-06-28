
auto main() -> int {
		
	const double* dd = new double(1.0);

	// float df = static_cast<float>(dd);

	double* pd = const_cast<double*>(dd);


	//dynamic_cast
	//reinterpret_cast

	return 0;
}