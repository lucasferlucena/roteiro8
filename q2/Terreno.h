#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"

class Terreno:public Imovel{
private:
	double area;
public:
	Terreno(double, Endereco);
	std::string getDescricao();

	void setArea(double);
	double getArea();

};

#endif