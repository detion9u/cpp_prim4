// part1:C05:5.7:ex5.20.cpp
#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    int n1, n2;
    cout << "Enter tow integers:\n";
    cin >> n1 >> n2;
    cout << "min value is: " << ((n1 < n2) ? n1 : n2) << endl;

    cout << "Bye!\n";
    return 0;
}