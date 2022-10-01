//part1:C03:ex3.13.cpp
#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    int num1, sum1 = 0;
    vector<int> vec1, vec2;
    
    cout << "Enter some integer: ('q' to quit:)\n";
    while ((cin >> num1) && cin.good())
    {
        vec1.push_back(num1);
    }

    for (vector<int>::size_type i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
     
    
    if (vec1.size() % 2 == 1)
    {
        cout << "\nthe last element was not calculated.";
        for (vector<int>::size_type i = 0; i < vec1.size() - 2; i++)
        {
            sum1 = 0;
            sum1 = vec1[i] + vec1[i + 1];
            vec2.push_back(sum1);
        }
    }
    else
    {
        for (vector<int>::size_type i = 0; i < vec1.size() - 1; i++)
        {
            sum1 = 0;
            sum1 = vec1[i] + vec1[i + 1];
            vec2.push_back(sum1);
        }
    }
    cout << "\n";
    for (vector<int>::size_type i = 0; i < vec2.size(); i++)
    {
        cout << vec2[i] << " ";
    }

    vec2.resize(0);
    for (vector<int>::size_type begin = 0, end = vec1.size() - 1; begin < vec1.size() / 2; begin++, end--)
    {
        sum1 = 0;
        sum1 = vec1[begin] + vec1[end];
        vec2.push_back(sum1);
    }

    cout << "\n";
    for (vector<int>::size_type i = 0; i < vec2.size(); i++)
    {
        cout << vec2[i] << " ";
    }
    cout << "\nBye!" << endl;
    return 0;
}