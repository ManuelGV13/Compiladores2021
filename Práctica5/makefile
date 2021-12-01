#Variables
OBJS = main.o algoritmo.o AFN.o Transicion.o estado.o

#Reglas para compilar el programa principal
all: programa

programa: $(OBJS)
	g++ -o programa $(OBJS)

Main.o: Main.cpp
	g++ -c main.cpp

Algoritmo.o: Algoritmo.cpp Algoritmo.hpp
	g++ -c algoritmo.cpp

AFN.o: AFN.cpp AFN.hpp
	g++ -c AFN.cpp

Transicion.o: Transicion.cpp Transicion.hpp
	g++ -c Transicion.cpp

EstadoCandidato.o: EstadoCandidato.cpp EstadoCandidato.hpp
	g++ -c estado.cpp

#Se eliminan los archivos .o
clean:
	rm -f programa $(OBJS)
