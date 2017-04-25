#include <iostream>
#include "Imovel.h"
#include "Endereco.h"
#include "Apartamento.h"
#include <string>

Apartamento::Apartamento(std::string p, double v, int g, Endereco a):Imovel(a){
		setPosicao(p);
		setValorDoCondominio(v);
		setNumeroDeVagasNaGaragem(g);
}

void Apartamento::setPosicao(std::string a){
	posicao = a;
}

std::string Apartamento::getPosicao(){
	return posicao;
}

void Apartamento::setValorDoCondominio(double a){
	valorDoCondominio = a;
}

double Apartamento::getValorDoCondominio(){
	return valorDoCondominio;
}

void Apartamento::setNumeroDeVagasNaGaragem(int a){
	numeroDeVagasNaGaragem = a;
}

int Apartamento::getNumeroDeVagasNaGaragem(){
	return numeroDeVagasNaGaragem;
}

std::string Apartamento::getDescricao(){
	std::string descricao, endereco;

	endereco = "Endereco:\n" + "Logradouro: "+ getEndereco().getLogradouro() +"\nBairro: "+ getEndereco().getBairro() +"\nNumero: " to_string(getEndereco().getNumero())+"\nCidade: "+ getEndereco().getCidade() + "\nCEP: "+ getEndereco().getCep();


	descricao = endereco + "\n\nApartamento:\n"+"Posicao: "+ getPosicao()+"\nValor do Condominio: "+ to_string(getValorDoCondominio)+"\nNumero de Vagas Na Garagem: "+to_string(getNumeroDeVagasNaGaragem());

	return descricao;
}
