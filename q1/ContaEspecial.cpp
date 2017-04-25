#include <iostream>
#include "Conta.h"
#include "IConta.h"
#include "ContaEspecial.h"
#include <string>

using namespace std;

ContaEspecial::ContaEspecial(std::string n, double s, int num, double saldo):Conta(n, s, num, saldo){
	setNomeCliente(n);
	setSalarioMensal(s);
	setNumeroConta(num);
	setSaldo(saldo);
}

void ContaEspecial::DefinirLimite(void){
	setLimite(3 * getSalarioMensal());
}

void ContaEspecial::sacar(double s){
	setSaldo(getSaldo()-s);
}

void ContaEspecial::depositar(double d){
	setSaldo(getSaldo()+d);
}

ContaEspecial::~ContaEspecial(){

}