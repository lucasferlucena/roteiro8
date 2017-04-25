#include <iostream>
#include "Imovel.h"
#include "Apartamento.h"
#include "Casa.h"
#include "Terreno.h"
#include "Endereco.h"
#include <string>

using namespace std;

int main()
{	
	Endereco a;

	a("Rua dos Escoteiros", "Mangabeira", 0, "Joao Pessoa", "58000-00");

	Imovel *imovel[5];

	//Imovel *im = new Casa();

	//Casa *c = (Casa *) im;

	imovel[2] = new Terreno(20, a);

	cout<< imovel[2].getDescricao();


	return 1;
}