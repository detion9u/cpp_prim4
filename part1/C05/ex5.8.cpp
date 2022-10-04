//par1:C05:5.2:ex5.8.cpp
#include <iostream>

int main(void)
{
    using namespace std;
    int a = 9;
    int b = 8;
    int c = 7;
    int d = 6;

    if ((a > b) && (b > c) && (c > d))
    {
        cout << " a > b > c > d!\n";    
    }
    else
        cout << "condition not good!\n";
    cout << "Bye!\n";
    return 0;
}
