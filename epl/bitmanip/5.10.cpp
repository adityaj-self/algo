#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;


int ReverseNum(int input)
{
	// declarations

	int total = 0;
	int neg = (input < 0);
	stringstream ss;
	ss << input;
	std::string inputStr = ss.str();

	// reverse
	reverse(inputStr.begin(), inputStr.end());


	// loop 
	for (const char ch : inputStr)
	{
		if (ch == '-')
			continue;
		total = total*10 + (ch - '0');
	}



	// return
	if (neg)
	{
		total *= -1;
	}

	return total;
}


int main()
{
	vector<int> inputs = {-314, -1, 0, 1, 100, 57890};

	for (const auto input : inputs)
	{
		cout << "input: " << input << " rev: " << ReverseNum(input) << endl;
	}
}
