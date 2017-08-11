#ifndef BICICLETAMONTANA_H
#define BICICLETAMONTANA_H

#include "Bicicleta.h"
#include "Llanta.h"
#include <string>
using namespace std;

class BicicletaMontana : public Bicicleta{

	public: 
		BicicletaMontana(double, double, Llanta*);
		double getPreciom();
		double getPesom();
		Llanta* getLlantam();
};




#endif
