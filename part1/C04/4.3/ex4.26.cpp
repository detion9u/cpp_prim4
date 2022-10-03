//part1:C04:4.3:ex4.26.cpp -- read a C-style stringt from console .
#include <cstddef>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
const size_t BUFSIZE {30};

void mystring_ctr(std::string strA, char* chararr);
//char* mystring_ctr(std::string strA);
int main(void)
{
    string str;
    char strC[BUFSIZE];
    char *ptr = new char[BUFSIZE];
    cout << "Enter some characters:\n";
    cin >> str;
    mystring_ctr(str, strC);
    mystring_ctr(str, ptr);
    
    cout << "str: " << str << endl;
    cout << "ptr: " << ptr << endl;
    delete [] ptr;

    cout << "Bye\n";

    return 0;
}

//char *mystring_ctr(std::string strA)
void mystring_ctr(std::string strA, char* chararr)
{
    //char mychar[BUFSIZE];
    for (size_t i = 0; i < strA.length(); i++)
    {
        //mychar[i] = strA.at(i);
        chararr[i] = strA.at(i);
    }
    //chararr[strlen(chararr)] = '\0';
    chararr[strA.length()] = '\0';
    //mychar[strlen(mychar)+1] = '\0';
    //strncpy(chararr, mychar, sizeof(mychar));
    //return mychar;
}