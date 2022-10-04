//par1:C05:5.2:ex5.7.cpp
#include <iostream>
#include <vector>

int main(void)
{	using namespace std;
	int num;
	vector <int> vec1;
	cout << "Enter some integers:\n";
	cin >> num;
	while (cin.good() && (num != 42))
	{
		vec1.push_back(num);
		cin >> num;
	}

	for (auto t : vec1)
	{	
		cout << t << " ";
	}
	cout << "\nBye!\n";
	return 0;
}
