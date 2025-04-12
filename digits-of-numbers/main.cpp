#include <iostream>
using namespace std;

int main() 
{
  int orgn; int c; int nr = 0;
  cout << "Dați un nr natural: "; cin >> orgn;
  unsigned int n = orgn;
  while(n != 0)
    {
      c = n % 10;
      n = n/10;
      nr++;
    }
  cout << "Nr " << orgn << " are " << nr << " cifre";
  return 0;
}