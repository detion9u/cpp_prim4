//part1:C04:4.1:ex4.8.cpp comparearray.cpp -- judeg arrA equal to arrB;
#include <iostream>
#include <array>


bool is_equal_array(std::array<int, 5> &arrA, std::array<int, 5> &arrB);
int main(void)
{
    using namespace std;
    array<int, 5> arrA{1, 2, 3, 4 ,5};
    array<int, 5> arrB{1, 2, 3, 4 ,5};
    array<int, 5> arrC{9, 2, 3, 4 ,9};
    bool isEqual = false;
    if (arrA.size() == arrB.size())
    {
        for (size_t i = 0; i != arrA.size(); i++)
        {
            if (arrA.at(i) != arrB.at(i))
            {
                isEqual = false;
            }
        }
        isEqual = true;
    }

    if (isEqual)
        cout << "arrA equal to arrB!\n";
    else
        cout << "arrA not equal to arrB!\n";
    
    if (is_equal_array(arrA, arrB))
        cout << "arrA equal to arrB!\n";
    else
        cout << "arrA not equal to arrB!\n";    
    cout << "Bye!\n";

    if (is_equal_array(arrA, arrC))
        cout << "arrA equal to arrC!\n";
    else
        cout << "arrA not equal to arrC!\n";    
    cout << "Bye!\n";

    return 0;
}

bool is_equal_array(std::array<int, 5> &arrA, std::array<int, 5> &arrB)
{
    bool isEqual = false;
    
    for (size_t i = 0; i != arrA.size(); i++)
    {
        if (arrA.at(i) != arrB.at(i))
        {
            isEqual = false;
            return isEqual;
        }
    }
    isEqual = true;
    
    return isEqual;
}