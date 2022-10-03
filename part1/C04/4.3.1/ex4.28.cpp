//part1:C04:4.3.1:ex4.28.cpp
// read integers from console and store them to array.
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
int main(void)
{
    int num;
    vector<int> vec1;

    cout << "Enter some integers:\n";
    while (cin >> num)
    {
        if (isalpha(num))
            break;
        
        vec1.push_back(num);
    }

    int *intptr = new int[vec1.size()];
    for (vector<int>::size_type i {0}; i < vec1.size(); i++)
    {
        intptr[i] = vec1.at(i);
    }

    while (*intptr)
    {
        cout << *intptr << " ";
        intptr++;
    }

    delete [] intptr;
    cout << "Bye!\n";
    return 0;
}
