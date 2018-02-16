#include <iostream>
#include <string>
#include "Edificio.h"
#include "Parqueo.h"
#include "Carro.h"
using namespace std;
//Crear arreglo 3d de apuntadores
//Carro**** createArray(int,int,int);
//Menu
int menu();
//Parquear
void parquear(Carro****,int,int,int,Carro*);

int main(){
	int op = 0;
	Edificio* edif = NULL;
	Carro* car;
	Parqueo* parqueo;
	int capacidad;
	int pisos;
	Carro**** matriz;
	string cmarca;
	string ccolor;
	double caltura;
	int larg;
	int anch;
	int largo;
	int ancho;
	int libre;
	int ocupado;
	while(op != 5){
		switch(op = menu()){
			case 1:
				cout<<"Ingrese la capacidad de personas por piso"<<endl;
				cin>>capacidad;			
				if(capacidad < 50 || capacidad > 200){
					cout<<"El edificio no aguanta tantas personas"<<endl;
					continue;
					//break;
				}
				cout<<"Ingrese la cantidad de pisos del edificio"<<endl;
				cin>>pisos;
				if (edif == NULL){
					edif = new Edificio(capacidad,pisos);
				}else{
					delete edif;
					edif = new Edificio(capacidad,pisos);
				}
				ancho = capacidad/10;
				if(ancho < 12){
					largo = ancho*0.7;
				}else{
					largo = ancho*0.4;
				}
				int npisos;
				npisos = pisos;
				cout<<"Desea crear un nuevo parqueo[0(si), 1(no)?"<<endl;
				int decision;
				cin>>decision;
				if(decision == 0){
					parqueo = new Parqueo(capacidad,pisos);
				}
				break;
			case 2:
				int selectpiso;
				cout<<"En que piso desea parquear su carro (empieza en 0)"<<endl;
				cin>>selectpiso;
				//string color;
				//string marca;
				//double altura;
				cout<<"Ingrese el color del carro: "<<endl;
				cin>>ccolor;
				cout<<"Ingrese la marca del carro: "<<endl;
				cin>>cmarca;
				cout<<"Ingrese la altura del carro"<<endl;
				cin>>caltura;
				if(caltura > parqueo->getAltura()){
					cout<<"El carro es muy alto"<<endl;
				}else{
					car = new Carro(ccolor,cmarca,caltura);
					parquear(parqueo->getMat(),selectpiso,parqueo->getFilas(),parqueo->getColumnas(),car);
				}
				break;
			case 3:
				cout<<"En que piso esta su carro: "<<endl;
				cin>>pisos;
				cout<<"Ingrese la fila en la que esta su carro: "<<endl;
				cin>>larg;
				cout<<"Ingrese la columna en la que esta su carro: "<<endl;
				cin>>anch;
				(parqueo->getMat())[pisos][larg][anch] = NULL;
				break;
			case 4:
				cout<<"Ingrese el piso que quiere ver: "<<endl;
				cin>>pisos;
				libre=0;
				ocupado=0;
				for(int a = 0; a < parqueo->getFilas(); a++){
					for(int b = 0; b < parqueo->getColumnas(); b++){
						if ((parqueo->getMat())[pisos][a][b] == NULL){
							//cout<<a<<"    "<<b<<"    "<<"agreg"<<endl;
							libre++;
						}else{
							//cout<<a<<"      "<<b<<"       "<<"ocup"<<endl;
							ocupado++;
						}
					}
				}
				cout<<"Hay: "<<libre<<" parqueos libres en el piso "<<pisos<<endl;
				cout<<"Hay: "<<ocupado<<" parqueos ocupados en el piso "<<pisos<<endl;
				break;
			case 5:
				break;		
		}
	}
}

/*Carro**** createArray(int x, int y, int z){
	Carro**** parqueo = new Carro***[x];
	for (int i = 0; i < x; i++){
		parqueo[i] = new Carro**[y];
		for (int j = 0; j < y; j++){
			parqueo[i][j] = new Carro*[z];
			for (int k = 0; k < z; k++){
				parqueo*[i][j][k] = NULL;
			}
		}
	}
	return parqueo;
}
*/
int menu(){
	int op;
	cout<<"1: Crear Edificio"<<endl
		<<"2: Parquear"<<endl
		<<"3: Quitar Carro"<<endl
		<<"4: Ver parqueos disponibles"<<endl
		<<"5:Salir"<<endl;
	cin>>op;
	return op;
}

void parquear(Carro**** parq, int piso, int ancho, int largo, Carro* car){
	bool ya = false;
	for(int i = 0; i < largo; i++){
		if(!ya){
			for(int j = 0; j < ancho; j++){
				if(!ya){
					if(parq[piso][i][j] == NULL){
						parq[piso][i][j] = car;
						ya = true;
						//cout<<"Agrego"<<endl;
						//cout<<piso<<"    "<<i<<"    "<<j<<endl;
					}
				}
			}
		}
	}
}
