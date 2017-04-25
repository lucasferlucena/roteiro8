#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"

class Apartamento:public Imovel{
private:
	std::string posicao;
	double valorDoCondominio;
	int numeroDeVagasNaGaragem;
public:
	Apartamento(std::string, double, int, Endereco);
	std::string getDescricao();

	void setPosicao(std::string);
	std::string getPosicao();

	void setValorDoCondominio(double);
	double getValorDoCondominio();

	void setNumeroDeVagasNaGaragem(int);
	int getNumeroDeVagasNaGaragem();
};

#endif