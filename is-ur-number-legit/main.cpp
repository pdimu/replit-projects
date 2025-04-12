#include <iostream>
using namespace std;

int main() 
{
  int a;
  cout<<"Give number:"; cin>>a;
  if (a%2==0) cout << "legit number, good to go";
  else cout<<"not legit, calling 911";
  return 0;
}