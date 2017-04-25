#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"

class Conta:public IConta{
private:
	
	std::string NomeCliente;
	double SalarioMensal;
	int NumeroConta;
	double Saldo;
	double Limite;

public:
	Conta(std::string, double, int, double);

	void setNomeCliente(std::string);
	std::string getNomeCliente(void);

	void setSalarioMensal(double);
	double getSalarioMensal(void);

	void setNumeroConta(int);
	int getNumeroConta(void);

	void setSaldo(double);
	double getSaldo(void);

	void setLimite(double);
	double getLimite(void);

	void DefinirLimite(void);

	virtual void sacar(double);
	virtual void depositar(double);

	~Conta();

};

#endif