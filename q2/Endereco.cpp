#include <iostream>
#include "Endereco.h"
#include <string>

Endereco::Endereco (std::string l, std::string b, int n, std::string ci, std::string ce){
	setLogradouro(l);
	setBairro(b);
	setNumero(n);
	setCidade(ci);
	setCep(ce);
}

void Endereco::setLogradouro(std::string a){
	logradouro = a;
}

std::string Endereco::getLogradouro(){
	return logradouro;
}

void Endereco::setBairro(std::string a){
	bairro = a;
}

std::string Endereco::getBairro(){
	return bairro;
}

void Endereco::setNumero(int a){
	numero = a;
}

int Endereco::getNumero(){
	return numero;
}

void Endereco::setCidade(std::string a){
	cidade = a;
}

std::string Endereco::getCidade(){
	return cidade;
}

void Endereco::setCep(std::string a){
	cep = a;
}

std::string Endereco::getCep(){
	return cep;
}




