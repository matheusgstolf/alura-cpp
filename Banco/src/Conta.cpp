#include "Conta.hpp"
#include <iostream>

void Conta::sacar(float valorASacar) {
	if (valorASacar < 0) {
		std::cout << "Não é possível sacar valor menor que zero, transação encerrada." << std::endl;
		return;
	}

	if (valorASacar > saldo) {
		std::cout << "Saldo insuficiente para realizar a operação, transação encerrada." << std::endl;
		return;
	}

	saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar) {
	if (valorADepositar < 0) {
		std::cout << "Não é possível depositar valor menor que zero, transação encerrada." << std::endl;
		return;
	}

	saldo += valorADepositar;
}