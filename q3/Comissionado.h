
#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"


class Comissionado : public Funcionario{

private:
	double vendasSemanais;
	double percentualComissao;

public:
	void setVendasSemanais(double);
	void setPercentualComissao(double);
	double getVendasSemanais(){return vendasSemanais;}
	double getPercentualComissao(){return percentualComissao;}

	double calcularSalario(void);

	Comissionado(std::string, int, double, double);

};

#endif