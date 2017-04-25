#include "Comissionado.h"

#define SALARIO_BASE 2000

Comissionado::Comissionado(std::string n, int m, double v, double p){
	setNome(n);
	setMatricula(m);
	vendasSemanais = v;
	percentualComissao = p;
}

void Comissionado::setVendasSemanais(double v){
	vendasSemanais = v;
}

void Comissionado::setPercentualComissao(double p){
	percentualComissao = p;
}

double Comissionado::calcularSalario(void){
	double salario;
	salario = SALARIO_BASE + vendasSemanais * percentualComissao / 100;
	return salario;
}