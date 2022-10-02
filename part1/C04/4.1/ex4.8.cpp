
//part1:C04:4.1:ex4.8.cpp -- judeg arrA equal to arrB;
#include <cstddef>
#include <iostream>
#include <vector>

bool is_array_equal(const int arrA[], size_t n1, const int arrB[], size_t n2);
int main(void)
{
    using namespace std;
    const size_t ArSize = 5;
    const int arrA[ArSize] {1, 2, 3, 4, 5};
    const int arrB[] {1, 2, 3, 4, 5};

    const int arr1[ArSize] {1, 2, 3, 4, 6};
    const int arr2[] {1, 2, 3, 4, 5};

    const int arr3[ArSize] {1, 2, 3, 4, 5};
    const int arr4[] {1, 2, 3, 4};

    vector<int> vec1, vec2;
    bool isEqual {true};
    size_t i, idx;
    size_t lenA, lenB;
    if (sizeof(arrA) == sizeof(arrB))
    {
        for (i = 0, idx = 0; i < sizeof(arrA) / sizeof(arrA[0]); i++, idx++)
        {
            if (arrA[i] == arrB[i])
                continue;
            else
            {
                isEqual = false;
                break;
            };

        }
    }
    else
    {
        isEqual = false;
    }

    /*if (i == idx && sizeof(arrA) == sizeof(arrB))
        isEqual = true;
    */
    if (isEqual)
        cout << "arrA equal to arrB!\n";
    else
        cout << "arrA not equal to arrB!\n";

    lenA = sizeof(arrA) / sizeof(arrA[0]);
    lenB = sizeof(arrB) / sizeof(arrB[0]);
    if (is_array_equal(arrA, lenA, arrB, lenB))
        cout << "arrA equal to arrB!\n";
    else
        cout << "arrA not equal to arrB!\n";

    if (is_array_equal(arr1, lenA, arr2, lenB))
        cout << "arr1 equal to arr2!\n";
    else
        cout << "arr1 not equal to arr2!\n";

    lenA = sizeof(arr3) / sizeof(arr3[0]);
    lenB = sizeof(arr4) / sizeof(arr4[0]);
    if (is_array_equal(arr3, lenA, arr4, lenB))
        cout << "arr3 equal to arr4!\n";
    else
        cout << "arr3 not equal to arr4!\n";        
    cout <<"Bye!\n";
    return 0;
}

bool is_array_equal(const int arrA[], size_t n1, const int arrB[], size_t n2)
{
    bool isEqual {false};
   
    if (n1 == n2)
    {
        //for (size_t i = 0, idx = 0; i < sizeof(arrA) / sizeof(arrA[0]); i++, idx++)
        for (size_t i = 0, idx = 0; i < n1; i++, idx++)
        {
            if (arrA[i] != arrB[i])
            {
                isEqual = false;
                return isEqual;
            }    
        }
        isEqual = true;
        return isEqual;
    }
        
    return isEqual;
}