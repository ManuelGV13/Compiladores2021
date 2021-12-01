#include <iostream> 
#include <vector> 
#include "transicion.hpp"

using namespace std;

void transicion::agregarTransicion(int estado){
	transiciones.push_back(estado);
}
bool transicion::estaVacia(){
	return transiciones.empty();
}
void transicion::imprimirElementos(){
	for(int i=0;i<transiciones.size();i++){
		if(i+1<transiciones.size())
			cout << transiciones[i] <<",";
		else
			cout << transiciones[i];
	}
}
int transicion::obtenerTransicion(int i){
	return transiciones[i];
}
int transicion::obtenerTamanio(){
	return transiciones.size();
}
