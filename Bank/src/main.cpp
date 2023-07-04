#include <string>
#include <iostream>
#include "Account.hpp"

using namespace std;

int main() {
  Account account1("123456789-10","Holder1","123.456.789-10");
  Account account2("987654321-00","Holder2","987.654.321-00");
  account1.deposit(100);
  account2.deposit(500);

  account1.withdraw(50.0);
  account2.deposit(500.0);
  cout << "Account 1:" << account1.getBankStatement() << " - Account 2:" << account2.getBankStatement() << endl;
  cout << "Total Accounts: " << Account::getTotalAccounts() << endl;
  exit(0);
}