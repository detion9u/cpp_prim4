//part1:C04:4.3:ex4.25.cpp -- compare stringA and stringB.
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string strA("hello");
    string strB("world");
    string strC("Ann");
    string strD("hello");

    cout << "strA = " << strA << " strD = " << strD << endl;
    cout << "strA == strD " << (strA == strD) << endl;

    cout << "strA = " << strA << " strB = " << strB << endl;
    cout << "strA < strB " << (strA > strB) << endl;

    cout << "strA = " << strA << " strC = " << strC << endl;
    cout << "strA > strC " << (strA < strC) << endl;
    
    return 0;
}
