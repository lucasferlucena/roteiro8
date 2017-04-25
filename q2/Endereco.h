#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

class Endereco{
private:
	std::string logradouro;
	std::string bairro;
	int numero;
	std::string cidade;
	std::string cep;
public:
	Endereco(){}
	Endereco(std::string, std::string, int, std::string, std::string);

	void setLogradouro(std::string);
	std::string getLogradouro();

	void setBairro(std::string);
	std::string getBairro();

	void setNumero(int);
	int getNumero();

	void setCidade(std::string);
	std::string getCidade();

	void setCep(std::string);
	std::string getCep();

};

#endif