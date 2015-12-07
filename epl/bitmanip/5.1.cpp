// 5.1 - Parity
#include <iostream>
#include <vector>
#include <stdint.h>

using namespace std;

uint64_t Parity(uint64_t input)
{
	// input validation

	if (input == 0)
	{
		return 0;
	}

	// compute parity

	input = input ^ (input >> 32);
	input = input ^ (input >> 16);
	input = input ^ (input >> 8);
	input = input ^ (input >> 4);
	input = input ^ (input >> 2);
	input = input ^ (input >> 1);
	input = input & 0x1;

	// return
	return input;
}

int main()
{
	vector<unsigned long> tests = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

	for (auto const test : tests)
	{
		std::cout << "Parity(" << test << ") : " << Parity(test) << endl;
	}
}

