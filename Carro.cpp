#include "Carro.h"
#include <string>
using namespace std;
Carro::Carro(string pcolor, string pmarca, double paltura){
	this->color = pcolor;
	this->marca = pmarca;
	this->altura = paltura;
}

Carro::Carro(){	
}

void Carro::setColor(string color){
	this->color = color;
}

void Carro::setMarca(string marca){
	this->marca = marca;
}

void Carro::setAltura(double altura){
	this->altura = altura;
}

string Carro::getColor(){
	return color;
}

string Carro::getMarca(){
	return marca;
}

double Carro::getAltura(){
	return altura;
}

Carro::~Carro(){

}
