//part1:C04:4.3.2:ex4.34.cpp
#include <cctype>
#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <cstring>
using namespace std;

int main(void)
{
    const int ArSize = 30;
    string str;
    vector<string> vec1;
    //char *chararr[5][ArSize];

    cout << "Enter some characters:\n";
    while ((cin >> str))
    {
        if (cin.fail())
            break;
        if (str.length() == 1 && str[0] == 'q')
        {
            break;
        }
        vec1.push_back(str);    
    }

    cout << "strings store to vector:\n";
    for (auto t : vec1)
    {
        cout << t << " ";
    }
    cout << "\npointer arrays to store vector elements:\n";
    const char *ptr[vec1.size()][ArSize];

    for (vector<string>::size_type i = 0; i != vec1.size(); i++)
    {   // the first point to vec[0] element.
        //*(ptr[0]+i) = vec1[i].c_str(); 
        *(ptr[i]) = vec1[i].c_str();
    }

    for (auto t : ptr)
    {
        cout << *t << " ";
    }
    //char[vec1.size()][ArSize];
    cout << "\n";
    cout << "Bye!\n";
    return 0;
}
