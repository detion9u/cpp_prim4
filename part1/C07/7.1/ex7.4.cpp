//part:C07:7.1:ex7.4.cpp
#include <iostream>
int my_value(int val);
int main(void) {
  using std::cout;
  using std::cin;
  int val;
  cout << "Enter a integer:\n";
  cin >> val;
  cout << my_value(val) << "\n";
  cout << "Bye!\n";

  return 0;
}
int my_value(int val) {
  return (val >= 0) ? val : -val;
}
