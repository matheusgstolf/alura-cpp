#include <string>
#include <iostream>
#include "Account.hpp"

using namespace std;

int main() {
  Account account1;
  account1.setAccountNumber("123456789");
  account1.setHolderIndividualRegistration("123.456.789-10");
  account1.setHolderName("Holder 1");
  account1.setBankStatement(100);

  Account account2;
  account2.setAccountNumber("987654321");
  account2.setHolderIndividualRegistration("987.654.321.-00");
  account2.setHolderName("Holder 2");
  account2.setBankStatement(500);

  account1.withdraw(50.0);
  account2.deposit(500.0);
  cout << "Account 1:" << account1.getBankStatement() << " - Account 2:" << account2.getBankStatement() << endl; 
  exit(0);
}