#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  cout<<"## sqrt √a: \n";
  {
    double a;
    cout<<"Give number: "; cin>>a;
    cout<<"Result: "<<sqrt(a)<<"\n";
    if (a==0) cout<<"√0 impossible \n";
  }
  cout<<"\n## abs |b| \n";
  {
    int b;
    cout<<"Give number: "; cin>>b;
    cout<<"Result: "<<abs(b)<<"\n";
  }
  cout<<"\n## sqr c² \n";
  {
    double c;
    cout<<"Give number: "; cin>>c;
    cout<<"Result: "<<c*c<<"\n";
  }
  cout<<"\n## floor d↓ \n";
  {
    double d;
    cout<<"Give number: "; cin>>d;
    cout<<"Result: "<<floor(d)<<"\n";
  }
  cout<<"\n## ceil e↑ \n";
  {
    double e;
    cout<<"Give number: "; cin>>e;
    cout<<"Result: "<<ceil(e)<<"\n";
  }
  cout<<"\n## round f↻ \n";
  {
    double f;
    cout<<"Give number: "; cin>>f;
    cout<<"Result: "<<round(f);
  }
}