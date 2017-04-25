#include <iostream>
#include "Imovel.h"
#include "Endereco.h"
#include "Terreno.h"
#include <string>

using namespace std;

Terreno::Terreno(double ar, Endereco a):Imovel(a){
		setArea(ar);
}

void Terreno::setArea(double a){
	area = a;
}

double Terreno::getArea (void){
	return area;
}

string Terreno::getDescricao(void){
	string endereco, descricao;
	endereco = "Endereco:\n" + "Logradouro: "+ getEndereco().getLogradouro() +"\nBairro: "+ getEndereco().getBairro() +"\nNumero: " to_string(getEndereco().getNumero())+"\nCidade: "+ getEndereco().getCidade() + "\nCEP: "+ getEndereco().getCep();

	descricao = "\n" + endereco + "\nAreao:" + to_string(getArea());

	return descricao;

}