//part1:C04:4.3.2:ex4.33.cpp -- transform vector to int arrray.
#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main(void)
{
    vector<int> vec1;
    array<int, 5> arr;

    for (vector<int>::size_type i = 0; i != 5; i++)
    {
        vec1.push_back(i+1);
    }

    for(auto t : vec1)
    {
        cout << t << " ";
    }
    cout << "\n";
    
    for (vector<int>::size_type i = 0; i != vec1.size(); i++)
    {
        arr.at(i) = vec1.at(i);
    }

    for(auto t : arr)
    {
        cout << t << " ";
    }

    cout << "\nBye!\n";
    return 0;
}