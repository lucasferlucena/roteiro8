#ifndef IMOVEL_H
#define IMOVEL_H
#include "Endereco.h"

class Imovel{
private:
	Endereco ende;

public:
	Imovel(Endereco);
	virtual std::string getDescricao() = 0;
	Endereco getEndereco();

};


#endif