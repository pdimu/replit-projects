#include <iostream>
using namespace std;

int main() {
  int an;
  cout << "Introdu un an: ";
  cin >> an;

  if ((an % 4 == 0 && an % 100 != 0) || an % 400 == 0) {
    cout << an << " este un an bisect.\n";
  } 
  else 
  {
    cout << an << " nu este un an bisect.\n";
  }

  return 0;
}