#include "Account.hpp"
#include <iostream>

int Account::totalAccounts = 0;

Account::Account(std::string _accountNumber, std::string _holderIndividualRegistration, std::string _holderName) {
	setAccountNumber(_accountNumber);
	setHolderIndividualRegistration(_holderIndividualRegistration);
	setHolderName(_holderName);
	this->bankStatement = 0;
	totalAccounts++;
};

/*GETTERS*/
std::string Account::getAccountNumber() const {
	return this->accountNumber;
}

std::string Account::getHolderIndividualRegistration() const {
	return this->holderIndividualRegistration;
}

std::string Account::getHolderName() const {
	return this->holderName;
}

float Account::getBankStatement() const {
	return this->bankStatement;
}

int Account::getTotalAccounts() {
	return totalAccounts;
}

/*SETTERS*/
void Account::setAccountNumber(const std::string _accountNumber) {
	this->accountNumber = _accountNumber;
	return;
}

void Account::setHolderIndividualRegistration(const std::string _holderIndividualRegistration) {
	this->holderIndividualRegistration = _holderIndividualRegistration;
	return;
}

void Account::setHolderName(const std::string _holderName) {
	this->holderName = _holderName;
	return;
}

/*METHODS*/
void Account::withdraw(const float _amountToWithdraw) {
	if (_amountToWithdraw < 0) {
		std::cout << "It is not possible to withdraw an amount less than zero, transaction closed." << std::endl;
		return;
	}

	if (_amountToWithdraw > bankStatement) {
		std::cout << "Insufficient balance to carry out the operation, transaction closed." << std::endl;
		return;
	}

	this->bankStatement -= _amountToWithdraw;
}

void Account::deposit(const float _amountToDeposit) {
	if (_amountToDeposit < 0) {
		std::cout << "Cannot deposit amount less than zero, transaction closed." << std::endl;
		return;
	}

	this->bankStatement += _amountToDeposit;
}