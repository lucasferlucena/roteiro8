#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario{

private:
	std::string nome;
	int matricula;
	
public:

	void setNome(std::string);
	void setMatricula(int);
	std::string getNome(){return nome;}
	int getMatricula(){return matricula;}

	virtual double calcularSalario(void) = 0;
};

#endif