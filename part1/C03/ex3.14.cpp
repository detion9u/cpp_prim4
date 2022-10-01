//part1:C03:ex3.14.cpp -- read a line and store them to vector as uppercase.
#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <cstring>

std::string my_toupper(std::string str);
int main(void)
{
    using namespace std;
    vector<string> vec1, vec2;
    string str;

    cout << "Enter some words:\n";
    cin >> str;
    while(!(str.length() == 1 && str[0] == 'q'))
    {
        //if (str.length() == 0)
        if (str.empty())
            break;
        else
        {
            str = my_toupper(str);
            vec1.push_back(str);
        }    
        cin >> str;
        if (str.empty() || str.length() == 0)
            break;
    }
    
    //cin >> str;

    for (vector<int>::size_type i {0}; i < vec1.size(); i++)
    {
        if ((i + 1) % 8 == 1)
            cout << "\n";
        cout << vec1[i] << " ";
    }
    cout << "\nBye!\n";
    return 0;
}

std::string my_toupper(std::string str)
{
    for (std::string::size_type i {0}; i < str.length(); i++)
    {
        str[i] = toupper(str.at(i));
    } 
    return str;
}