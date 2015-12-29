#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

void stringToInt(const string& input)
{

	cout << "Input: " << input;

	int total = 0;
	int val = 0;
	bool neg = false;

	for (char ch : input)
	{
		if (ch == '-')
		{
			neg = true;
			continue;
		}

		if (!isdigit(ch))
		{
			cout << "Output: Invalid input" << endl;
			return;
		}
			

		val = ch - '0';
		total = total*10 + val;
	}

	if (neg)
	{
		total *= -1;
	}

	cout << " Output: " << total;
	cout <<endl;
}


int main()
{
	vector<string> inputs = {"0", "-1", "123", "-512", "abcd", "11.2"};

	for (const auto& input : inputs)
	{
		stringToInt(input);
	}
}
