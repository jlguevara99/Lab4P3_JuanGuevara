#include "Bicicleta.h"
#include "Llanta.h"
#include<string>
using namespace std;

Bicicleta::Bicicleta(){
	precio = 0;
	peso = 0;
	llantas = NULL;
}

Bicicleta::Bicicleta(double mPrecio,double mPeso, Llanta* mllanta){
	precio = mPrecio;
	peso = mPeso;
	llantas = mllanta;
}

Bicicleta::~Bicicleta(){
	delete llantas;
}

double Bicicleta::getPrecio(){
	return precio;
}

double Bicicleta::getPeso(){
	return peso;
}

Llanta* Bicicleta::getLlanta(){
	return llantas;
}
