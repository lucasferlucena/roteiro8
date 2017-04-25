#include "Assalariado.h"


Assalariado::Assalariado(std::string n, int m, double s){
	setNome(n);
	setMatricula(m);
	salario = s;
}

void Assalariado::setSalario(double s){
	salario = s;
}

double Assalariado::calcularSalario(void){
	return salario;
}