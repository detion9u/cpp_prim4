//part1:C06:6.7:ex6.12.cpp -- count to the words.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
    using namespace std;
    string str;
    unsigned int count = 0;
    unsigned int idx;
    vector<string> vrow;
    vector<int> vcol;
    vector<string>::iterator iterrow;
    vector<int>::iterator itercol;

    cout << "Enter some characters:\n";
    cin >> str;
    vrow.push_back(str);
    vcol.push_back(++count);
    while (cin >> str)
    {
        if ((str.length() == 1) && str[0] == 'q')
            break;

        if (std::find(vrow.begin(), vrow.end(), str) != vrow.end())
        {
            iterrow = std::find(vrow.begin(), vrow.end(), str);
            idx = iterrow - vrow.begin();
            vcol[idx] += 1;
            //vcol.insert(vcol.begin()+idx,++count);
        }     
        else
        {
            count = 0;
            vrow.push_back(str);
            vcol.push_back(++count);
        }
    }

    for (unsigned int i = 0; i != vrow.size(); i++)
    {   
        cout << vrow[i] << " : " << vcol[i] << "\n";
    }

    cout << "Bye!\n";

    return 0;
}