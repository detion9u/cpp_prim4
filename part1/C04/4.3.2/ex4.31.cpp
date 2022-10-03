//part1:C04:4.3.1:ex4.31.cpp
// read a string to array.
#include <cstddef>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void)
{
    const int ArSize {3};
    char arrA[ArSize];
    char *ptr;
    string str; 

    cout << "Enter some characters:\n";
    cin >> str;

    if ((str.length() > ArSize))
    {
        ptr = new char[str.length()];
        strncpy(ptr, str.c_str(),str.length());
        ptr[str.length()] = '\0';
        cout << ptr << endl;
        delete [] ptr;
    }
    else 
    {
       strncpy(arrA, str.c_str(),str.length());
       arrA[str.length()] = '\0';
       cout << ptr << endl;
    }
    
    cout << "Bye!\n";
    return 0;
}