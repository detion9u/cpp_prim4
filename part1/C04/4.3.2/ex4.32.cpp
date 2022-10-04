//part1:C04:4.3.2:ex4.32.cpp -- transform int array to vector.
#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main(void)
{
	//const int arr[]{1, 2, 3, 4, 5};
	array<int, 6> arr {1, 2, 3, 4, 5, 6};
	vector<int> vec1;

	for (auto it : arr)
	{
		vec1.push_back(it);
	}

	for (vector<int>::size_type i = 0; i != vec1.size(); i++)
	{
		cout << vec1.at(i) << " ";
	}
	cout << "\nBye!\n";
	return 0;
}

