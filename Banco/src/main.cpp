#include <string>
#include <iostream>
#include "Conta.hpp"

using namespace std;

int main() {
  Conta conta1;
  conta1.numeroConta = "123456789";
  conta1.cpfTitular = "123.456.789-10";
  conta1.nomeTitular = "Titular 1";
  conta1.saldo = 100;

  Conta conta2;
  conta2.numeroConta = "123456789";
  conta2.cpfTitular = "987.654.321-00";
  conta2.nomeTitular = "Titular 2";
  conta2.saldo = 100;

  conta1.sacar(50.0);
  conta2.depositar(500.0);
  cout << "Conta 1:" << conta1.saldo << " - Conta 2:" << conta2.saldo << endl; 
  exit(0);
}