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
  std::string getAccountNumber() const;
  std::string getHolderIndividualRegistration() const;
  std::string getHolderName() const;
  float getBankStatement() const;
  
  /*SETTERS*/
  void setAccountNumber(const std::string _accountNumber);
  void setHolderIndividualRegistration(const std::string _holderIndividualRegistration);
  void setHolderName(const std::string _holderName);
  
  /*METHODS*/
  void withdraw(const float _amountToWithdraw);
  void deposit(const float _amountToDeposit);
};