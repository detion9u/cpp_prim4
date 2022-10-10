//part1:C07:7.2.1:ex7.5.cpp
#include <iostream>
using namespace std;

int max1(int, int*);
int main(void) {
  int n1, n2;
  cout << "Enter tow intergers:\n";
  cin >> n1 >> n2;
  cout << max1(n1, &n2) << endl;

  cout << "Bye!\n";
  return 0;
}
int max1(int n1, int *n2) {
  return (n1 > *n2) ? n1 : *n2;
}
