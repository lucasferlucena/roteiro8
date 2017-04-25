#include <iostream>
#include "Imovel.h"
#include "Endereco.h"

Imovel::Imovel(Endereco b){
	ende = b;

}

Endereco Imovel::getEndereco(void){
	return ende;

}