// part1:C03:ex3.7.cpp
#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    string str1, str2, max_str;
    cout << "Enter two words:\n";
    cin >> str1 >> str2;
    
    /* method one
    if (str1 == str2)
    {
        cout << "two words is equal!" << endl;
    }
    else
    {   
        max_str = (str1 > str2) ? str1 : str2;
        cout << "larger one is: " << max_str << endl;
    }*/
    /* method two   */
    if (str1.length() == str2.length())
    {
        cout << "two words is equal!" << endl;
    }
    else
    {   
        max_str = (str1.length() > str2.length()) ? str1 : str2;
        cout << "larger one is: " << max_str << endl;
    }
    cout << "Bye!\n";
    return 0;
}