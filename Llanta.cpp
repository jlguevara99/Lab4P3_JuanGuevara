#include "Llanta.h"
#include<string>
using namespace std;

Llanta::Llanta(){

}

Llanta::Llanta(string lMaterial, double lPrecio, string lColor){
	material = lMaterial;
	precioL = lPrecio;
	color = lColor;
}

double Llanta::getPrecioL(){
	return precioL;
}
