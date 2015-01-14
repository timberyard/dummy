
#include <iostream>

int main(int argc, const char* const* argv)
{
	float x = 5.5;
	int y = x;
	int z = x;
	int a = 2;
	std::cout << "dummy process - " << y << std::endl;
	std::cerr << "dummy process" << std::endl;
	return 0;
}
