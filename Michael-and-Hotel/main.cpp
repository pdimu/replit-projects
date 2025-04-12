#include <iostream>
using namespace std;

int main()
{
  int a, b, i;
  cout << "Prima urcare: "; cin >> a;
  cout << "A doua urcare: "; cin >> b;
  {
    {
      for (i = a; i == b; i++)
      cout << i;
    }
    {
      for(i = 0; i <= a; i++)
      cout << i << ", ";
    }
    {
      for(i = a - 1; i >= b; i--)
      cout << i << ", ";
    }
  }
  return 0;
}