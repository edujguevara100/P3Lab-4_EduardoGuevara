#include "Parqueo.h"
#include "Carro.h"
#include <string>
#include <iostream>
using namespace std;
Parqueo::Parqueo(){
}
Parqueo::Parqueo(int cap,int pisos){
	cout<<"Ingrese la altura maxima"<<endl;
	cin>>this->alturamax;
	this->capacidad = cap;
	this->pisos = pisos;
	this->niveles = pisos;
	this->filas = cap/10;
	if(filas < 12){
		this->columnas = this->filas*0.7;
	}else{
		this->columnas = this->filas*0.4;
	}
	cout<<niveles<<endl;
	cout<<filas<<endl;
	cout<<columnas<<endl;
	Crear(this->niveles,this->filas,this->columnas);
}
Carro**** Parqueo::getMat(){
	return this->parq;
}
double Parqueo::getAltura(){
	return this->alturamax;
}
int Parqueo::getNiveles(){
	return this->niveles;
}
int Parqueo::getFilas(){
	return this->filas;
}
int Parqueo::getColumnas(){
	return this->columnas;
}
void Parqueo::Crear(int x,int y, int z){
	this->parq = new Carro***[x];
	for (int i = 0; i < x; i++){
		this->parq[i] = new Carro**[y];
		for (int j = 0; j < y; j++){
			this->parq[i][j] = new Carro*[z];
			for(int k =0; k < z; k++){
				this->parq[i][j][k] = NULL;
			}
		}
	}	
}
void Parqueo::setNiveles(int x){
	this->niveles = x;
}
void Parqueo::setFilas(int y){
	this->filas = y;
}
void Parqueo::setColumnas(int z){
	this->columnas = z;
}
Parqueo::~Parqueo(){
	for (int i = 0; i < this->niveles; i++){
		for (int j = 0; j < this->filas; j++){
			for (int k = 0; k < this->columnas; k++){
				this->parq[i][j][k] = NULL;
				delete this->parq[i][j][k];
			}
			delete[]this->parq[i][j];
		}
		delete[]this->parq[i];
	}
	delete[]this->parq;
}
