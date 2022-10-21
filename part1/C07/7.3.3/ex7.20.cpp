//part1:C07:7.3.3:ex7.20.cpp
#include <iostream>
using namespace std;

int factorial(const int &val);
int main(void)
{
    int result = 0;
    for (int i = 1; i < 6; i++)
    {
        result = factorial(i);
        cout << result << endl;
    }
    
    return 0;
}

int factorial(const int &val)
{
    int result = 1;
    int n = val;
    while (n >= 1)
    {
        result *= n;
        n--;
    }

    return result;
}