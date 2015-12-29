// Dutch flag problem

#include<vector>
#include<iostream>

using namespace std;

void Reorder(vector<int>& input, int index)
{

	cout << "Reorder" << endl;
	// vars
	int left = 0; 
	int right = input.size() - 1;

	if (index < left || index > right)
	{
		return;
	}
	
	int val = input[index];

	cout << "val: "<< val << endl;

	// loop

	while (left < right)
	{
		while (input[left] < val)
		{
			left++;
		}

		while (input[right] > val)
		{
			right--;
		}

		if (left < right)
		{
			cout << "Swapping: " << input[left] << " and " << input[right] << endl;
			auto tmp = input[left];
			input[left] = input[right];
			input[right] = tmp;
			right--;
		}
		else
		{
			break;
		}
	}

}


int main()
{
        vector<int> input = {-1, 5, 6, 0, 3, 4, 6, 7, -9, 4};
	cout << "Calling reorder" << endl;

	Reorder(input, 5);
	cout << "ordered input : " << endl;
	for (int i : input)
	{
		cout << i << ",";
	}

	return 0;
}	
