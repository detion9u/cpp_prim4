//part1:C06:6.11:ex6.21.cpp  -- search the string, if its first alpha is uppercase .
#include <cctype>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
    using namespace std;
    string str;
    unsigned int idx = 0;
    unsigned int count = 0;
    vector<string> vrow;
    vector<int> vidx;

    cout << "Enter some characters:\n";
    cin >> str;
    
    vrow.push_back(str);
    vidx.push_back(idx);
    if (isupper(str[0]))
        ++count;

    while (cin >> str)
    {
        if ((str.length() == 1) && str[0] == 'q')
            break;
        
        vrow.push_back(str);
        vidx.push_back(++idx);
        if (isupper(str[0]))
            ++count;
        if (vrow.size() >=2 && count >=2 && isupper(str[0]))
        {
            if (vrow[idx][0] == vrow[idx-1][0] && vrow[idx] == vrow[idx-1])
            {
                cout << vrow[idx] << " : " << idx << " >> " << vrow[idx-1] << endl; 
                cout << vrow[idx][0] << " : " << idx << " >>> " << vrow[idx-1][0] << endl; 
                cout << str << " : " << idx << " > " << vrow[idx] << endl; 
                break;
            }
        }
    }

    for (unsigned int i = 0; i != vrow.size(); i++)
    {   
        cout << vrow[i] << " : " << i << "\n";
    }

    cout << "\nBye!\n";

    return 0;
}
