//part1:C07:7.2.6:ex7.15.cpp
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    char *n1, *n2;
    if (argc < 2)
    {
        cerr << "args less than two!" << endl;
        exit(EXIT_FAILURE);
    }
    n1 = argv[1];
    n2 = argv[2];
    cout << atoi(n1) <<  " " << atoi(n2) 
         << "\nn1 + n2 = " << atoi(n1) + atoi(n2) << endl;
    cout << "Hello, cpp!" << endl;
    return 0;
}