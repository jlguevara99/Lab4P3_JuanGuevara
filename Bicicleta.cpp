#include "Bicicleta.h"
#include "Llanta.h"
#include<string>
using namespace std;

Bicicleta::Bicicleta(){
	precio = 0;
	peso = 0;
	llantas = NULL;
}




Bicicleta::~Bicicleta(){
	delete llantas;
}

