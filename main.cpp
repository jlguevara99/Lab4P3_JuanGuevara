#include "Bicicleta.h"
#include "BicicletaMontana.h"
#include "BicicletaCarrera.h"
#include "Llanta.h"
#include<iostream>
#include <string>
using namespace std;
int tamano(int);

void llenado1();
void llenado2();

int main(){
	BicicletaCarrera** camionCar = NULL;
	BicicletaMontana** camionMon = NULL;
	cout<<"Buenas, Bienvenido a Jitensha Motors"<<endl;
	cout<<"Ingrese el tamaño n del camion de carreras"<<endl;
	int tamanoCar;
	cin>>tamanoCar;
	cout<<"Ingrese el tamaño n del camion de montaña"<<endl;
	int tamanoMon;
	cin>>tamanoMon;

	

	return 0;
}

int tamano(int numero){
	int m;
	if(numero%4 == 0){
		m = numero + (numero*0.75);
	}else if(numero%2 == 0){
		m = numero*1.5;
	}else{
		m = 2*numero;
	}

	return m;
	
}
