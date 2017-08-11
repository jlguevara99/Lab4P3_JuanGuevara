#ifndef BICICLETA_H
#define BICICLETA_H
#include"Llanta.h"
#include <string>
using namespace std;

class Bicicleta{
	private:
		double precio;
		double peso;
		Llanta* llantas;

	public:
		Bicicleta();
		~Bicicleta();
		Bicicleta(double,double,Llanta*);
		double getPrecio();
		double getPeso();
		Llanta* getLlanta();
};





#endif
