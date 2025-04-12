#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int a, b;
  double c;
  cout << "Da lungimea catetei nr.1:"; cin >> a;
  cout << "Da lungimea catetei nr.2:"; cin >> b;
  c = sqrt(a*a + b*b);
  cout << "Lungimea ipotenuzei este:"; cout << c;
  return 0;
}