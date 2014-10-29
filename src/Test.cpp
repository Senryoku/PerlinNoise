#include <iostream>

#include "PerlinNoise.hpp"

int main(int argc, char* argv[])
{
	PerlinNoise PN;
	const int res = 5;
	for(int i = 0; i < res; ++i)
	{
		for(int j = 0; j < res; ++j)
			std::cout << PN(static_cast<double>(i)/res, 
							static_cast<double>(j)/res) << " \t";
		std::cout << std::endl;
	}
}