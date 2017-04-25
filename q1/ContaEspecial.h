#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial:public Conta{

public:
	ContaEspecial(std::string, double, int, double);

	void DefinirLimite(void);

	virtual void sacar(double);
	virtual void depositar(double);

	~ContaEspecial();

};

#endif