//part1:C06:6.10:ex6.20.cpp -- count to the words.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
    using namespace std;
    string str;
    unsigned int idx = 0;
    vector<string> vrow;
    vector<int> vidx;

    cout << "Enter some characters:\n";
    cin >> str;
    vrow.push_back(str);
    vidx.push_back(idx);
    while (cin >> str)
    {
        if ((str.length() == 1) && str[0] == 'q')
            break;
        vrow.push_back(str);
        vidx.push_back(++idx);
        
        if (vrow[idx] == vrow[idx-1])
        {
            cout << str << " : " << idx << " > " << vrow[idx] << endl; 
            break;
        }
    }

    for (unsigned int i = 0; i != vrow.size(); i++)
    {   
        cout << vrow[i] << " : " << i << "\n";
    }

    cout << "\nBye!\n";

    return 0;
}