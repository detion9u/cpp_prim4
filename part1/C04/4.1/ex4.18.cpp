//part1:C04:4.1:ex4.18.cpp
#include <iostream>

int main(void)
{
    const int ArSize = 5;
    int arr[ArSize];
    int *ptr = &arr[0];
    int i;
    /*while (i < ArSize)
    {
        *(ptr + i) = 0;
        //ptr++;
        i++;
    }*/
    for (i = 0; i < ArSize; i++, ptr++)
    {
        *ptr = 0;
    }

    for (auto it : arr)
    {
        std::cout << it << " ";
    }
    std::cout << "\nBye\n";
    return 0;
}