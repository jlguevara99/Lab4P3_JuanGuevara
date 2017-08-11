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
	int mCarrera;
	int mMontana;
	mCarrera = tamano(tamanoCar);
	mMontana = tamano(tamanoMon);
	cout<<"El tamaño m del camion de carreras es "<<mCarrera<<endl;
	cout<<"El tamaño m del camion de montana es "<<mMontana<<endl;
	//provisionar camion de carrera
	

	int contador1=0;
	double precioC = 0;
	double precioM = 0;
	int contador2=0;
	bool salir = true;
	do {
		cout<<"1. Agregar individuales"<<endl;
		cout<<"2. Agregar repetidas"<<endl;
		cout<<"3. calcular el valor total"<<endl<<"4. Salir"<<endl;
		int opcion;
		cin>>opcion;
		if(opcion == 1){
			cout<<"Que bicicleta desea agregar"<<endl;
			cout<<"1.Carrera"<<endl<<"2.Montaña"<<endl;
			int opcion2;
			cin>>opcion2;
		
				cout<<"Ingrese el precio"<<endl;
				double precio1;
				cin>>precio1;
			
				cout<<"Ingrese el peso"<<endl;
				double peso1;
				cin>>peso1;
				cout<<"Ingrese el material de la llanta"<<endl;
				string material1;
				cin>>material1;
				cout<<"Ingrese el precio la llanta"<<endl;
				double precioll;
				cin>>precioll;
				cout<<"Ingrese el peso de la llanta"<<endl;
				double peso2;
				cin>>peso2;
				cout<<"Ingrese el color de la llanta"<<endl;
				string color;
				cin>>color;
				if(opcion2 == 1){

					contador1++;
					precioC += precio1 + precioll;
				}else{
					contador2++;
					precioM += precio1 + precioll;
				}

		}else if(opcion == 2){
			cout<<"Que bicicleta desea agregar"<<endl;
			cout<<"1. Carrera"<<endl<<"2. Montana"<<endl;
			int opcion3;
			cin>>opcion3;

			cout<<"Ingrese el precio"<<endl;
			double preciop;
			cin>>preciop;
			cout<<"Ingrese el peso"<<endl;
			double pesop;
			cin>>pesop;
			cout<<"Ingrese el material de la llanta"<<endl;
			string materialp;
			cin>>materialp;
			cout<<"Ingrese el precio de la llanta"<<endl;
			double precio2;
			cin>>precio2;
			cout<<"Ingrese el color de la llanta"<<endl;
			string color2;
			cin>>color2;
			if(opcion3 == 1){
				contador1++;
				precioC += preciop + precio2*(tamanoCar*mCarrera);
			}else{
				contador2++;
				precioM += preciop + precio2*(tamanoMon*mMontana);
			}
		}else if(opcion == 3){
			cout<<"De cual camion desea ver el precio? "<<endl<<"1. Carreras"<<endl<<"2. Montaña"<<endl;
			int valor;
			cin>>valor;
			if(valor == 1){
				cout<<"El precio del camion de carreras es: "<<precioC;
			}else if(valor == 2){
				cout<<"El precio del camion de carreras es: "<<precioM;
			}else{
				cout<<"La opcion no es valida"<<endl;
			}
		}else{
			salir = false;
		}

	} while (salir);
	

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
