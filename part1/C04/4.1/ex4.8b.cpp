//part1:C04:4.1:ex4.8b.cpp -- judeg vec1 equal to vec2;
#include <iostream>
#include <vector>
using namespace std;

bool is_vector_equal(vector<int> &v1, vector<int> &v2);
int main(void)
{
    
    vector<int> vec1(9,1), vec2(9,1);
    /* method 1st: */
    if (vec1 == vec2)
        cout << "vec1 equal to vec2!\n";
    else
        cout << "vec1 not equal to vec2!\n";

    vector<int> vec3(9,1), vec4(9,2);
    vector<int> vec5(9,1), vec6(8,1);
    if(is_vector_equal(vec3, vec4))
    {
        cout << "vec3 equal to vec4!\n";
    }
    else
    {
        cout << "vec3 not equal to vec4!\n";
    }

    if(is_vector_equal(vec5, vec6))
    {
        cout << "vec5 equal to vec6!\n";
    }
    else
    {
        cout << "vec5 not equal to vec6!\n";
    }

    if(is_vector_equal(vec1, vec2))
    {
        cout << "vec1 equal to vec2!\n";
    }
    else
    {
        cout << "vec1 not equal to vec2!\n";
    }
    cout <<"Bye!\n";
    return 0;
}
bool is_vector_equal(vector<int> &v1, vector<int> &v2)
{
    bool isEqual = true;
    if (v1.size() == v2.size())
    {
        for (vector<int>::size_type i = 0; i != v1.size(); i++)
        {
            if (v1[i] == v2[i])
                continue;
            else
            {
                isEqual = false;
                break;
            }
                
        }
    }
    else 
    {
        return false;
    }
    return isEqual;
}