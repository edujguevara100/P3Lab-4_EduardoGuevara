#include <string>
#include "Carro.h"
using namespace std;
#ifndef PARQUEO_H
#define PARQUEO_H
class Parqueo{
	private:
		Carro**** parq;
		int niveles;
		int filas;
		int columnas;
		int capacidad;
		int pisos;
		double alturamax;
	public:
		Parqueo();
		Carro**** getMat();
		void Crear(int,int,int);
		Parqueo(int,int);
		double getAltura();
		int getNiveles();
		int getFilas();
		int getColumnas();
		void setNiveles(int);
		void setFilas(int);
		void setColumnas(int);
		~Parqueo();
};
#endif
