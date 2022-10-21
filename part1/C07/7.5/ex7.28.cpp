//part1:C07:7.5:ex7.28.cpp
#include <iostream>
using namespace std;
static int COUNT = 0;
int count1(void);
int main(void)
{
    for (unsigned int i = 0; i < 10; i++)
    {
        cout << count1() << endl;
    }
    cout << "Bye!" << endl;
    return 0;
}

int count1(void)
{
    return COUNT++;    
}


