#pragma once
#include <string>

class Account {
  private:
  std::string accountNumber;
  std::string holderIndividualRegistration;
  std::string holderName;
  float bankStatement;
  static int totalAccounts;

  /*SETTERS*/
  void setAccountNumber(const std::string _accountNumber);
  void setHolderIndividualRegistration(const std::string _holderIndividualRegistration);
  void setHolderName(const std::string _holderName);

  public:
  Account(std::string _accountNumber, std::string _holderIndividualRegistration, std::string _holderName);
  ~Account();
  /*GETTERS*/
  std::string getAccountNumber() const;
  std::string getHolderIndividualRegistration() const;
  std::string getHolderName() const;
  float getBankStatement() const;
  static int getTotalAccounts();

  /*METHODS*/
  void withdraw(const float _amountToWithdraw);
  void deposit(const float _amountToDeposit);
};