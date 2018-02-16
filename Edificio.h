#ifndef EDIFICIO_H
#define EDIFICIO_H
#include <string>
using namespace std;
class Edificio{
	private:
		int capacidad;
		int npisos;
	public:
		Edificio();
		Edificio(int,int);
		void setCapacidad(int);
		void setNPisos(int);
		int getCapacidad();
		int getNPisos();
		~Edificio();
};
#endif

