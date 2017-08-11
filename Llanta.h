#ifndef LLANTA_H
#define LLANTA_H
#include <string>
using namespace std;

class Llanta{
	private:
		string material;
		double precioL;
		string color;
	public:
		Llanta();
		Llanta(string,double,string);
		double getPrecioL();

};




#endif
