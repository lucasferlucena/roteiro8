#include <iostream>
#include "Imovel.h"
#include "Endereco.h"
#include "Casa.h"

Casa::Casa (int p, int q, double at, double ac, Endereco b):Imovel(b){
	setNumeroDePavimentos(p);
	setQuantidadeDeQuartos(q);
	setAreaDoTerreno(at);
	setAreaConstruida(ac);
}

void Casa::setAreaConstruida(double a){
	areaConstruida = a;
}

double Casa::getAreaConstruida(){
	return areaConstruida;
}

void Casa::setAreaDoTerreno(double a){
	areaDoTerreno = a;
}

double Casa::getAreaDoTerreno(){
	return areaDoTerreno;
}

void Casa::setNumeroDePavimentos(int a){
	areaConstruida = a;
}

int Casa::getNumeroDePavimentos(){
	return areaNumeroDePavimentos;
}

void Casa::setQuantidadeDeQuartos(int a){
	areaConstruida = a;
}

int Casa::getQuantidadeDeQuartos(){
	return areaConstruida;
}




