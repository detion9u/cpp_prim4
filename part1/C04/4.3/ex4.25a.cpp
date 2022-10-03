//part1:C04:4.3:ex4.25a.cpp -- compare strA and strB.
#include <iostream>
#include <cstring>
using namespace std;

const int ArSize = 20;
int is_equal_chars(char *strA, char *strB);
int main(void)
{
    
    char strA[ArSize] = "hello";
    char strB[ArSize] = "world";
    char strC[ArSize] = "Ann";
    char strD[ArSize] = "hello"; 
    
    cout << "strA = " << strA << " strD = " << strD << endl;
    if (!is_equal_chars(strA, strD))
    {
        cout << "strA equal to strD " << endl;
    }        
    
    cout << "strA = " << strA << " strC = " << strC << endl;
    if (is_equal_chars(strA, strC) > 0)
    {
        cout << "strA larger than strC " << endl;
    }   

    cout << "strA = " << strA << " strB = " << strB << endl;
    if (is_equal_chars(strA, strB) < 0)
    {
        cout << "strA smaller than strB " << endl;
    }   

    return 0;
}
int is_equal_chars(char *strA, char *strB)
{
    strA[strlen(strA)] = '\0';
    strB[strlen(strB)] = '\0';
    char *pa = strA;
    char *pb = strB;

    if (strlen(strA) < strlen(strB))
    {
        return -1;
    }
    else if (strlen(strA) > strlen(strB))
    {
        return 1;
    }
    
    else if (strlen(strA) == strlen(strB))
    {
        while (*pa != '\0')
        {
            if (*pa != *pb)
            {
                return -2;
            }
            else
            {
                pa++;
                pb++;
            }
        }
        return 0;
    }
    return -3;
}