#ifndef BICICLETACARRERA_H
#define BICICLETACARRERA_H

#include "Bicicleta.h"
#include "Llanta.h"
#include <string>
using namespace std;

class BicicletaCarrera : public Bicicleta{
	
	public:
		BicicletaCarrera(double, double, Llanta*);
		double getPrecio();
		double getPeso();
		Llanta* getLlanta();
				
};






#endif
