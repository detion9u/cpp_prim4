// part1:C03:ex3.10.cpp -- get rid of punct.
#include <iostream>
#include <string>
#include <cstring>

int main(void)
{
    using namespace std;
    string str,str2;
    cout << "Enter some characters:\n";
    cin >> str;
    cout << "string is: " << str << endl;
    for (string::size_type i = 0, j = 1; i < str.length(); i++)
    {
        if(ispunct(str.at(i)))
        {
            continue;
        } 
        else
        {
            str2.append(j,str.at(i)); 
        }
    }    
    cout << "string new is: " << str2 << endl;
    cout << "Bye!\n";
    return 0;
}