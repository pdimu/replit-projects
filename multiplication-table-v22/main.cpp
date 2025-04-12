#include <iostream>
using namespace std;

int main() 
{
  for (int a = 1; a <= 10; a++) 
  {
    for (int b = 1; b <= 10; b++) 
    cout << b << "x" << a << "=" << a * b << "\n";
    cout << "\n";
  }
  return 0;
}