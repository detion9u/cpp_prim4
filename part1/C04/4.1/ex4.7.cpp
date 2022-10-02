//part1:C04:4.1:ex4.7.cpp
// array A assign to array B.
#include <cstddef>
#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    const size_t ArSize = 5;
    const int arrA[ArSize] {1, 2, 3, 4, 5};
    int arrB[ArSize] {};
    vector<int> vec1, vec2;

    for (size_t i = 0; i != ArSize; i++)
    {
        arrB[i] = arrA[i];
    }

    cout << "arrA assign to arrB:\n";
    for (size_t i = 0; i != ArSize; i++)
    {
        cout << arrB[i] << " ";
    }

    cout << "\n";

    /*for (vector<int>::size_type i = 0; i != ArSize; i++)
    {
        vec1.push_back(arrA[i]);
    }*/
    for (auto it : arrA)
    {
        vec1.push_back(it);
    }

    // method 1st: vec2 = vec1;
    vec2 = vec1;
    // method 2nd:
    /*for (vector<int>::size_type i = 0; i != vec1.size(); i++)
    {
        vec2.push_back(vec1[i]);
    }*/
    cout << "vec1 assign to vec2:\n";
    for (vector<int>::size_type i = 0; i != vec2.size(); i++)
    {
        cout << vec2[i] << " ";
    }

    cout << "\nvec1 assign to vec2:\n";
    for (auto ele : vec2)
    {
        cout << ele << " ";
    }

    cout << "\nBye!\n";

    return 0;
}