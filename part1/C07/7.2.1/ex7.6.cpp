//part1:C07:7.2.1:ex7.6.cpp -- swap two integers.
#include <iostream>
using namespace std;

void my_swap(int *, int *);
int main(void) {
  int n1, n2;
  cout << "Enter two integers:\n";
  cin >> n1 >> n2;
  cout << n1 << " " << n2 << endl;
  my_swap(&n1, &n2);
  cout << n1 << " " << n2 << endl;
  return 0;
}
void my_swap(int *n1, int *n2) {
  int tmp;
  tmp = *n1;
  *n1 = *n2;
  *n2 = tmp;
}
