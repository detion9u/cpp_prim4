//part1:C04:4.3.1:ex4.28.cpp
// read integers from console and store them to array.
#include <cstddef>
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
int main(void)
{
    int num, cnt = 0;
    vector<int> vec1;

    cout << "Enter some integers:\n";
    //cin >> num;
    while ((cin >> num) && (!(isalpha(num))))
    {
        if (cin.fail())
            break;
        else if (!(isalpha(num)))
            vec1.push_back(num);    
        if (isalpha(num))
            break;
        
        //cout << "Enter some integers:\n";
        //cin >> num;
    }

    int *intptr = new int[vec1.size()];
    for (vector<int>::size_type i {0}; i < vec1.size(); i++)
    {
        intptr[i] = vec1.at(i);
    }


    while (cnt < vec1.size())
    {
        cout << *intptr << " ";
        intptr++;
        cnt++;
    }

    delete [] intptr;
    cout << "Bye!\n";
    return 0;
}
