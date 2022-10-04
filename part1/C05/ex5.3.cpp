// part1:C05:5.1:ex5.3.cpp
#include <iostream>
#include <array>

int main(void)
{
    using namespace std;
    array<int, 5> arr {1, 2, 3, 4, 5};
    for (auto t : arr)
    {
        cout << t << " ";
    }
    cout << "\nBye!\n";
    return 0;
}
