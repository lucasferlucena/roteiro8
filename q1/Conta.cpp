#include <iostream>
#include "Conta.h"
#include "IConta.h"
#include <string>

using namespace std;

void Conta::setNomeCliente(std::string n){
	NomeCliente = n;
}

std::string Conta::getNomeCliente(){
	return NomeCliente;
}

void Conta::setSalarioMensal(double a){
	SalarioMensal = a;
}

double Conta::getSalarioMensal(){
	return SalarioMensal;
}

void Conta::setNumeroConta(int i){
	NumeroConta = i;
}

int Conta::getNumeroConta(){
	return NumeroConta;
}

void Conta::setSaldo(double a){
	Saldo = a;
}

double Conta::getSaldo(){
	return Saldo;
}

void Conta::setLimite(double a){
	Limite = a;
}

double Conta::getLimite(){
	return Limite;
}

void Conta::DefinirLimite(){
	setLimite(2 * getSalarioMensal());
}

void Conta::sacar(double s){
	setSaldo(getSaldo()-s);
}

void Conta::depositar(double d){
	setSaldo(getSaldo()+d);
}

Conta::Conta(std::string n, double s, int num, double saldo){
	setNomeCliente(n);
	setSalarioMensal(s);
	setNumeroConta(num);
	setSaldo(saldo);
}

Conta::~Conta(){

}

