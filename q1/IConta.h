#ifndef ICONTA_
#define ICONTA_

class IConta{

public:
	virtual void depositar(double)=0;
	virtual void sacar(double)=0;
};

#endif