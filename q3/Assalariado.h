
#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"

class Assalariado : public Funcionario{

private:
	double salario;
public:
	void setSalario(double);
	double getSalario(void){return salario;}

	double calcularSalario(void);

	Assalariado(std::string, int, double);
};

#endif