#pragma once
#include <string>

class Account {
  private:
  std::string accountNumber;
  std::string holderIndividualRegistration;
  std::string holderName;
  float bankStatement = 0.0;

  public:
  /*GETTERS*/
  std::string getAccountNumber();
  std::string getHolderIndividualRegistration();
  std::string getHolderName();
  float getBankStatement();
  
  /*SETTERS*/
  void setAccountNumber(std::string _accountNumber);
  void setHolderIndividualRegistration(std::string _holderIndividualRegistration);
  void setHolderName(std::string _holderName);
  
  /*METHODS*/
  void withdraw(float valorASacar);
  void deposit(float valorADepositar);
};