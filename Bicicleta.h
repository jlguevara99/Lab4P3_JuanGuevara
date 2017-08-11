#ifndef BICICLETA_H
#define BICICLETA_H
#include"Llanta.h"
#include <string>
using namespace std;

class Bicicleta{
	public:
		double precio;
		double peso;
		Llanta* llantas;

				
		Bicicleta();
		~Bicicleta();
		
		
};





#endif
