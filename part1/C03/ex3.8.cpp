// part1:C03:ex3.8.cpp -- somoe strings concat to one string.
#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    string str1, str2, str3, str4;
    string strnew;

    cout << "Enter four words:\n";
    cin >> str1 >> str2 >> str3 >> str4;
    strnew = str1 + " " + str2 + " " + str3 + " " + str4;
    str1 = str1 + str2 + str3 + str4;
    cout << "new string is: " << str1 << endl;
    cout << "new string is: " << strnew << endl;
    cout << "Bye!\n" << endl;
    return 0;
}