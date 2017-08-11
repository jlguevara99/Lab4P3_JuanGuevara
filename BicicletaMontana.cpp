#include "BicicletaMontana.h"
#include "Bicicleta.h"
#include "Llanta.h"
#include <string>
using namespace std;

BicicletaMontana::BicicletaMontana(double prec, double Pes, Llanta* llan){
	precio = prec;
	peso = Pes;
	llantas = llan;
}

double BicicletaMontana::getPreciom(){
	return precio;
}
double BicicletaMontana::getPesom(){
	return peso;
}
Llanta* BicicletaMontana::getLlantam(){
	return llantas;
}

