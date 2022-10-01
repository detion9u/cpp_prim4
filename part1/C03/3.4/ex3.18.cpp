//part1:C03:3.4:ex3.18.cpp
#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    vector<int> vec(10,1);
    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter << " ";
    }

    cout << "\n";
    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
    {
        *iter = *iter * 2;
        cout << *iter << " ";
    }
    cout << "\nBye!\n";
    return 0;
}