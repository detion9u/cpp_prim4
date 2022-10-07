//part1:C06:6.10:ex6.19.cpp -- search a value's index.
#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    vector<int> vec1;
    int value = 0;
    
    for (unsigned i = 0; i < 5; i++)
    {
        vec1.push_back(i);
    }

    cout << "search value is: " << value << endl;
    vector<int>::iterator iter = vec1.begin();
    while (iter != vec1.end() && (*iter++ != value))
    {

    }
    cout << *--iter << " : " << iter - vec1.begin() << endl;

    for (auto it : vec1)
    {
        cout << it << " ";
    }

    cout << "\nBye\n";
    return 0;
}