#include <iostream>
using namespace std;

int main() 
{
  int a, b;
  cout << "How many money you want to add to the account? - "; cin >> a;
  cout << "!ERROR! %not_enough_account_balance_for_performing_action%" << endl;
  cout << "Seems like you don't have enough money in your account to add other money." << endl;
  cout << "Would you like to add some new type of money (yes, bitcoin) to add the normal type of money? [type Y/N] "; cin >> b;
  cout << "!ERROR! %account_hacked_by_new_money_terminating_system";
  cout << ".";
  cout << ".";
  cout << "." << endl;
  cout << endl << "Bye!";
}