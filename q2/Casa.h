#ifndef CASA_H
#define CASA_H
#include "Imovel.h"

class Casa:public Imovel{
private:
	int numeroDePavimentos;
	int quantidadeDeQuartos;
	double areaDoTerreno;
	double areaConstruida;
public:
	Casa(int, int, double, double, Endereco);
	std::string getDescricao();

	void setNumeroDePavimentos(int);
	int getNumeroDePavimentos();

	void setQuantidadeDeQuartos(int);
	int getQuantidadeDeQuartos();

	void setAreaDoTerreno(double);
	double getAreaDoTerreno();

	void setAreaConstruida(double);
	double getAreaConstruida();

};
#endif