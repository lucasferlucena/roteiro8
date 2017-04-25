#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#define TAM 5

class SistemaGerenciaFolha{

private:
	Funcionario * funcionarios[TAM];
public:
	void setFuncionarios(Funcionario**);
	double calcularValorTotalFolha(void);
	double consultaSalarioFuncionario(int);

	SistemaGerenciaFolha();

};

#endif