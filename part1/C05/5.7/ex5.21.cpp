// part1:C05:5.7:ex5.21.cpp
#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    int arr[] {1, 3, 4};

    vector<int> vec1;

    for (auto it : arr)
    {
        vec1.push_back(((it & 1) == 1) ? (it << 1) : it);
    }

    for (auto it : vec1)
    {
        cout << it << " ";
    }
    cout << "\nBye!\n";
    return 0;
}