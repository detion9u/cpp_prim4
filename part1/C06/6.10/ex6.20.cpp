//part1:C06:6.10:ex6.20.cpp -- count to the words.
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
    vector<string>::iterator iterrow2;
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
            if (std::find(iterrow, vrow.end(), str) != vrow.end())
            {
                iterrow2 = std::find(iterrow, vrow.end(), str);
                idx = iterrow2 - vrow.begin();
                cout <<">> " << *iterrow2 << "-" << vrow[idx] << ":." << idx  << " " << vcol[idx] << endl;
                if (vcol[idx] == 1)
                {
                    cout << "words is : " << *iterrow << endl;
                    break;
                }
            }
            idx = iterrow - vrow.begin();
            vcol[idx] += 1;
            /*if (*(iterrow - 1) == (*iterrow))
            {
                cout << "words is : " << *iterrow << endl;
                break;
            } */  
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