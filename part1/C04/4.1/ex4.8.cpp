
//part1:C04:4.1:ex4.8.cpp -- judeg arrA equal to arrB;
#include <cstddef>
#include <iostream>
#include <vector>

bool is_array_equal(const int arrA[], const int arrB[]);
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

    if (is_array_equal(arrA, arrB))
        cout << "arrA equal to arrB!\n";
    else
        cout << "arrA not equal to arrB!\n";

    if (is_array_equal(arr1, arr2))
        cout << "arr1 equal to arr2!\n";
    else
        cout << "arr1 not equal to arr2!\n";

    if (is_array_equal(arr3, arr4))
        cout << "arr3 equal to arr4!\n";
    else
        cout << "arr3 not equal to arr4!\n";        
    cout <<"Bye!\n";
    return 0;
}

bool is_array_equal(const int arrA[], const int arrB[])
{
    bool isEqual {false};
    /*const int *pA = arrA;
    const int *pB = arrB;
    int lenA = sizeof(pA) / sizeof(pA[0]);
    int lenB = sizeof(pB) / sizeof(pB[0]);
    */
    int lenA = sizeof(arrA) / sizeof(arrA[0]);
    int lenB = sizeof(arrB) / sizeof(arrB[0]);
    
    if (lenA == lenB)
    {
        //for (size_t i = 0, idx = 0; i < sizeof(arrA) / sizeof(arrA[0]); i++, idx++)
        for (size_t i = 0, idx = 0; i < lenA; i++, idx++)
        {
            if (arrA[i] == arrB[i])
                continue;
            else
            {
                isEqual = false;
                return isEqual;
                //break;
            };
        }
        isEqual = true;
        //return isEqual;
    }
    else
    {
        isEqual = false;
        return isEqual;
    }
    
    return isEqual;
}