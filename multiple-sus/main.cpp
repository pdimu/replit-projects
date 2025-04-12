#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  cout<<"## while ():\n";
  {
    int a,b,c;
    cout<<"Give number 1: "; cin>>a;
    cout<<"Give number 2: "; cin>>b;
    c=a;
    cout<<" "<<c<<"\n";   
  }
  cout<<"\n";
  cout<<"## for:\n";
  {
    int d,e,f;
    cout<<"Give number 1: ";cin>>d;
    cout<<"Give number 2: ";cin>>e;
    for(f=d;f<=e;f++)
      cout<<" "<<f;
    cout<<"\n";
  }
  cout<<"\n";
  cout<<"## do while:\n";
  {
    int g,h;
    cout<<"Give number 1: ";cin>>g;
    cout<<"Give number 2: ";cin>>h;
    do 
    {
      cout<<" "<<g;
      g++;
    } while(g<=h);
  }
  cout<<"\n";
  cout<<"\n## if:\n";
  {
    int i;
    cout<<"Give number: ";cin>>i;
    if(i==0)
      cout<<"Yes, it's null";
    else
      cout<<"No, it isn't null";
  }
}