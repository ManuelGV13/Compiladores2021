#Variables
OBJS = main.o algoritmo.o AFN.o transicion.o estado.o

#Reglas para compilar el programa principal
all: programa

programa: $(OBJS)
	g++ -o programa $(OBJS)

main.o: main.cpp
	g++ -c main.cpp

algoritmo.o: algoritmo.cpp algoritmo.hpp
	g++ -c algoritmo.cpp

AFN.o: AFN.cpp AFN.hpp
	g++ -c AFN.cpp

transicion.o: transicion.cpp transicion.hpp
	g++ -c Transicion.cpp

estado.o: estado.cpp estado.hpp
	g++ -c estado.cpp

#Se eliminan los archivos .o
clean:
	rm -f programa $(OBJS)
