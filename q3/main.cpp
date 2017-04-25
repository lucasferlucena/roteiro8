#include "Assalariado.h"
#include "Comissionado.h"
#include "SistemaGerenciaFolha.h"
#include <iostream>
#include <string>

using namespace std;

std::string funcionarioDoMes(Funcionario &fulano){
	return fulano.getNome();
}

int main(){

	Funcionario * funcionarios[TAM];

	funcionarios[0] = new Assalariado("Joao", 2376432, 850.59);
	funcionarios[1] = new Comissionado("Pedro", 2142351, 1500, 50);
	funcionarios[2] = new Comissionado("Flavio", 5642866, 9000, 30);
	funcionarios[3] = new Assalariado("Lucas", 4215492, 2500);
	funcionarios[4] = new Assalariado("Karina", 2348512, 50000);

	SistemaGerenciaFolha folha;

	folha.setFuncionarios(funcionarios);

	cout << "Salario de Joao: R$ " << folha.consultaSalarioFuncionario(1) << endl;
	cout << "Salario de Pedro: R$ " << folha.consultaSalarioFuncionario(2) << endl;
	cout << "Salario de Flavio: R$ " << folha.consultaSalarioFuncionario(3) << endl;
	cout << "Salario de Lucas: R$ " << folha.consultaSalarioFuncionario(4) << endl;
	cout << "Salario de Karina: R$ " << folha.consultaSalarioFuncionario(5) << endl;
	cout << "\nValor total da folha de funcionarios: R$ " << folha.calcularValorTotalFolha() << endl;

	cout << "\nFuncionario do mes: " << funcionarioDoMes(*funcionarios[2]) <<", Matricula: " << funcionarios[2]->getMatricula() <<  endl;



	return 0;
}