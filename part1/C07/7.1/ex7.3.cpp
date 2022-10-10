//part1:C07:7.1:ex7.3.cpp
#include <iostream>
using namespace std;
int my_power(int &,int &);
int main(void) {
  int num, pow;
  cout << "Enter two integers:(num1 num2)" << endl;
  cin >> num >> pow;
  cout << my_power(num, pow) << endl;
  cout << "Bye!\n";
  return 0;
}
int my_power(int &num,int &pow) {
  int result = 1;
  for (unsigned int i = 0; i < pow; i++) {
    result *= num;
  }
  return result;
}
