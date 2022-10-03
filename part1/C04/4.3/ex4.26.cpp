//part1:C04:4.3:ex4.26.cpp -- read a C-style stringt from console .
#include <cstddef>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
const int BUFSIZE = 30;

void mystring_ctr(std::string strA, char* chararr);
//char* mystring_ctr(std::string strA);
int main(void)
{
    string str;
    char strC[BUFSIZE];
    char *ptr = new char[BUFSIZE];
    cout << "Enter some characters:\n";
    cin >> str;
    //mystring_ctr(str, strC);
    //ptr = mystring_ctr(str);
    //strncpy(strC, ptr, strlen(ptr));
    mystring_ctr(str, strC);
    //strC[strlen(strC)+1] = '\0';
    cout << "str: " << str << endl;
    cout << "strC: " << strC << endl;
    cout << "Bye\n";

    return 0;
}

//char *mystring_ctr(std::string strA)
void mystring_ctr(std::string strA, char* chararr)
{
    char mychar[BUFSIZE];
    for (size_t i = 0; i < strA.length(); i++)
    {
        mychar[i] = strA.at(i);
    }
    mychar[strlen(mychar)+1] = '\0';
    strncpy(chararr, mychar, sizeof(mychar));
    //return mychar;
}