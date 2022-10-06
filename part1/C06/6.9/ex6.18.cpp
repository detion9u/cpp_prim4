//part1:C06:6.9:ex6.18.cpp
#include <iostream>
#include <string>


const std::string & min_string(const std::string &s1, const std::string &s2)
{
    return (s1 < s2) ? s1 : s2;
}

int main(void)
{
    using namespace std;
    string str1, str2;
    do
    {
        cout << "Enter two words:\n";
        cin >> str1 >> str2;
        cout << "min is :" << min_string(str1, str2) << endl;
    } while ((str1.length() != 1) && (str2.length() != 1));
    cout << min_string(str1, str2);
    return 0;
}