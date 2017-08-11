#include "BicicletaCarrera.h"
#include "Bicicleta.h"
#include "Llanta.h"
#include <string>
using namespace std;

BicicletaCarrera::BicicletaCarrera(double Prec, double pes, Llanta* lla){
	precio = Prec;
	peso = pes;
	llantas = lla;
}

double BicicletaCarrera::getPrecio(){
	return precio;
}
double BicicletaCarrera::getPeso(){
	return peso;
}
Llanta* BicicletaCarrera::getLlanta(){
	return llantas;
}
