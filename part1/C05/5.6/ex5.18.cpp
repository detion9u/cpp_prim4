//part1:C05:5.6:ex5.18.cpp
#include <cstddef>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>

int main(void)
{
    using namespace std;
    const size_t ArSiZe = 10;
    string str[ArSiZe];
    size_t i = 0;
    vector<string*> vec1;
    
    cout << "Enter some characters:\n";
    cin >> str[i];
    while (!(str[i].length() == 1 && str[i][0] == 'q'))
    {
        if (str[i].length() == 1 && str[i][0] == 'q')
            break;
        
        vec1.push_back(&str[i]);
        i++;
        cin >> str[i];    
    }

    /* output 1st:
    vector<string*>::iterator iter; 
    for (iter = vec1.begin(); iter != vec1.end(); iter++)
    {
        cout << (*iter)->c_str() << " ";
    }*/
    /* output 2nd:
    for (vector<string*>::size_type k = 0; k != vec1.size(); k++)
    {
        cout << vec1[k]->c_str() << " ";
    }*/
    for (auto t : vec1)
    {
        //cout << t->c_str() << " " << "length is: " << strlen(t->c_str()) << endl;
        cout << *t << " " << "length is: " << (*t).length() << endl;
    }
    cout << "\nBye!\n";
    return 0;
}