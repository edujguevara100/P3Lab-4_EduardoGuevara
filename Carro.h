#include <string>
#ifndef CARRO_H
#define CARRO_H
using namespace std;
class Carro{
	private:
		string color;
		string marca;
		double altura;
	public:
		Carro();
		Carro(string,string,double);
		void setColor(string);
		void setMarca(string);
		void setAltura(double);
		string getColor();
		string getMarca();
		double getAltura();
		~Carro();
};

#endif
