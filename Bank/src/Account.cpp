#include "Account.hpp"
#include <iostream>

/*GETTERS*/
std::string Account::getAccountNumber() {
	return accountNumber;
}

std::string Account::getHolderIndividualRegistration() {
	return holderIndividualRegistration;
}

std::string Account::getHolderName() {
	return holderName;
}

float Account::getBankStatement() {
	return bankStatement;
}

/*SETTERS*/
void Account::setAccountNumber(std::string _accountNumber) {
	accountNumber = _accountNumber;
	return;
}

void Account::setHolderIndividualRegistration(std::string _holderIndividualRegistration) {
	holderIndividualRegistration = _holderIndividualRegistration;
	return;
}

void Account::setHolderName(std::string _holderName) {
	holderName = _holderName;
	return;
}

/*METHODS*/
void Account::withdraw(float _amountToWithdraw) {
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

void Account::deposit(float _amountToDeposit) {
	if (_amountToDeposit < 0) {
		std::cout << "Cannot deposit amount less than zero, transaction closed." << std::endl;
		return;
	}

	bankStatement += _amountToDeposit;
}