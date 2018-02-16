temp:	p3Lab4_EduardoGuevara.o Carro.o Parqueo.o Edificio.o
		g++ p3Lab4_EduardoGuevara.o Carro.o Parqueo.o Edificio.o -o temp
p3Lab4_EduardoGuevara.o:	p3Lab4_EduardoGuevara.cpp Carro.h Parqueo.h Edificio.h
	g++ -c p3Lab4_EduardoGuevara.cpp
Carro.o:	Carro.h Carro.cpp
	g++ -c Carro.cpp
Parqueo.o:	Parqueo.h Parqueo.cpp Carro.h
	g++ -c Parqueo.cpp
Edificio.o:	Edificio.h Edificio.cpp
	g++ -c Edificio.cpp
		
