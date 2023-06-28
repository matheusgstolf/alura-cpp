#pragma once
#include <string>

struct Conta {
  std::string numeroConta;
  std::string cpfTitular;
  std::string nomeTitular;
  float saldo = 0.0;

  void sacar(float valorASacar);
  void depositar(float valorADepositar);
};