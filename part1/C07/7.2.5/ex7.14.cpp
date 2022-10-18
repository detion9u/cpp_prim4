//part1:C07:7.2.5:ex7.14.cpp
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int sum_vector(const vector<int> &v);
int main(void)
{
    const int MAXSIZE = 6;
    vector<int> vec1;
    for (int i = 1; i <= MAXSIZE; i++)
    {
        vec1.push_back(i);
    }
    cout << "sum of vector is :" << endl;
    cout << sum_vector(vec1) << endl;
    return 0;
}

int sum_vector(const vector<int> &v1)
{
    int sum1 = 0;
    for (auto t : v1)
    {
        sum1 += t;
    }

    return sum1;
}
