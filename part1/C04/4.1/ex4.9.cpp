//part1:C04:4.1:ex4.9.cpp
#include <iostream>
using namespace std;

int main(void)
{
    const int ArSize = 10;
    int arr[ArSize];

    for (int i = 0; i < ArSize; i++)
    {
        arr[i] = i;
        cout << arr[i] << " ";
    }

    cout << "\nBye!\n" << endl; 
    return 0;
}