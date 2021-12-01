#include <iostream> 
#include <vector>
#include "estado.hpp"

void estado::mostrarNucleo(){
	for(int i=0;i<nucleo.size();i++)
		cout<<" "<<nucleo[i];	
}
void estado::ingresarNucleo(int estado){
	nucleo.push_back(estado);
}
int estado::obtenerIndiceNucleo(int i){
	return nucleo[i];
}
vector<int> estado::obtenerNucleoVector(){
	return nucleo;
}
int estado::nucleoTamanio(){
	return nucleo.size();
}
void estado::marcarDestado(){
	marcaDestado=true;
}
void estado::desmarcarDestado(){
	marcaDestado=false;
}
bool estado::obtenerDestado(){
	return marcaDestado;
}
void estado::agregarEstado(int estado){
	estados.push_back(estado);
}
bool estado::tablaVacia(){
	return estados.empty();
}
void estado::imprimirTabla(){
	for(int i=0;i<estados.size();i++){
		cout<< estados[i] <<" ";
	}
}
int estado::obtenerEstado(int i){
	return estados[i];
}
int estado::obtenerTamanioEstados(){
	return estados.size();
}
