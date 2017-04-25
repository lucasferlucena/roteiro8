#include <iostream>
#include <string>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{	
	Conta a("oswaldo", 1000, 1020, 2000);
	ContaEspecial b("Joao", 1000, 1021, 2000);

	a.sacar(100);
	a.depositar(200);
	a.DefinirLimite();

	b.sacar(200);
	b.depositar(100);
	b.DefinirLimite();

	cout << "Saldo: " << a.getSaldo() << endl;
	cout << "Saldo: " << b.getSaldo() << endl;

	cout << "Limite: " << a.getLimite() << endl;
	cout << "Limite: " << b.getLimite() << endl;


}