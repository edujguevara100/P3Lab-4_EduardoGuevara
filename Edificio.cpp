#include "Edificio.h"
#include <string>
using namespace std;
Edificio::Edificio(){
}
Edificio::Edificio(int capacidad, int npisos){
	this->capacidad = capacidad;
	this->npisos = npisos;
}

int Edificio::getCapacidad(){
	return capacidad;
}

int Edificio::getNPisos(){
	return npisos;
}

void Edificio::setCapacidad(int capacidad){
	this->capacidad = capacidad;
}

void Edificio::setNPisos(int npisos){
	this->npisos = npisos;
}

Edificio::~Edificio(){

}
