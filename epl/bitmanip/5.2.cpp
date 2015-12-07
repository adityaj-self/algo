// swap bits

#include <iostream>
#include <vector>

using namespace std;

long swapbits(long input, int i, int j)
{
	if ( ((input >> i) & 0x1) == ((input >> j) & 0x1))
	{
		return input;
	}

	return (input ^ (1 << i | 1 << j));
}


int main()
{
	vector<long> inputs = {1, 2, 4, 8, 10};

	for (auto input : inputs)
	{
		auto swappedbits = swapbits(input, 1, 5);
		cout << "We swapped: " << input << "into: " << swappedbits << endl; 

	}

	return 0;
}
