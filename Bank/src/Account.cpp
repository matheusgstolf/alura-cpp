#include "Account.hpp"
#include <iostream>

/*GETTERS*/
std::string Account::getAccountNumber() const {
	return accountNumber;
}

std::string Account::getHolderIndividualRegistration() const {
	return holderIndividualRegistration;
}

std::string Account::getHolderName() const {
	return holderName;
}

float Account::getBankStatement() const {
	return bankStatement;
}

/*SETTERS*/
void Account::setAccountNumber(const std::string _accountNumber) {
	accountNumber = _accountNumber;
	return;
}

void Account::setHolderIndividualRegistration(const std::string _holderIndividualRegistration) {
	holderIndividualRegistration = _holderIndividualRegistration;
	return;
}

void Account::setHolderName(const std::string _holderName) {
	holderName = _holderName;
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

	bankStatement -= _amountToWithdraw;
}

void Account::deposit(const float _amountToDeposit) {
	if (_amountToDeposit < 0) {
		std::cout << "Cannot deposit amount less than zero, transaction closed." << std::endl;
		return;
	}

	bankStatement += _amountToDeposit;
}