// Fig. 3.9: AccountTest.cpp
// Displaying and updating Account balances.
#include <iostream>
#include "Account.h"
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
   Account account1{"Jane Green", 50.50};
   Account account2{"John Blue", -7};

   // display initial balance of each object
   cout << "account1: " << account1.getName() << " balance is $"
      << account1.getBalance();
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance();

    // deposit test in account1
   cout << "\n\nEnter deposit amount for account1: "; // prompt
   double depositAmount;
   cin >> depositAmount; // obtain user input
   cout << "adding " << depositAmount << " to account1 balance";
   account1.deposit(depositAmount); // add to account1's balance
    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
       << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
       << account2.getBalance();
    

    // deposit test in account2
   cout << "\n\nEnter deposit amount for account2: "; // prompt
   cin >> depositAmount; // obtain user input
   cout << "adding " << depositAmount << " to account2 balance";
   account2.deposit(depositAmount); // add to account2 balance
    
    
    // withdrawal test in account1
    cout << "\n\nEnter withdrawal amount for account1: "; // prompt
    double withdrawAmount;
    cin >> withdrawAmount; // obtain user input
    cout << "deducting " << withdrawAmount << " from account1 balance";
    account1.withdraw(withdrawAmount); // add to account1's balance
   // display balances
   cout << "\n\naccount1: " << account1.getName() << " balance is $"
      << account1.getBalance();
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance();
    
    // withdrawal test in account2
    cout << "\n\nEnter withdrawal amount from account2: "; // prompt
    cin >> withdrawAmount; // obtain user input
    cout << "deducting " << withdrawAmount << " from account2 balance";
    account2.withdraw(withdrawAmount); // add to account2 balance
    
   // display balances
   cout << "\n\naccount1: " << account1.getName() << " balance is $"
      << account1.getBalance();
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance() << endl;
    
    return 0;
}

