//#include "ex7.7.h"
//part1:C07:7.2.5:ex7.13.cpp
#include <iostream>
using namespace std;

int sum1(const int*beg, const int*end);
int sum2(const int *arr, size_t size);
int sum3(const int arr[], size_t size);
int main(void)
{
    int arr[6] {1, 2, 3, 4, 5, 6};
    cout << "sum of arr[6] is :" << endl;
    cout << sum1(arr, arr + 6) << endl;
    cout << sum2(arr, sizeof(arr)/sizeof(*arr)) << endl;
    cout << sum2(arr, sizeof(arr)/sizeof(*arr)) << endl;
    cout << "Hello CPP!" << endl;
    return 0;
}

int sum1(const int*beg, const int*end)
{
   int sum1  = 0;
   while(beg != end)
   {
       sum1 += *beg++;
   }
   return sum1;
}

int sum2(const int *arr, size_t size)
{
    int sum2 = 0;
    while(size--)
    {
        sum2 += arr[size];
    }
    return sum2;
}
int sum3(const int arr[], size_t size)
{
    int sum3 = 0;
    for (int i = 0; i < size; i++)
    {
        sum3 += arr[i];
    }
    return sum3;
}
