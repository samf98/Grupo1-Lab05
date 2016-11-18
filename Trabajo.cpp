#include "Contactos.h"
#include "Trabajo.h"
#include <iostream>

using std::endl;
using std::cout;

void Trabajo::imprimir(){
	cout << "Esta es una instancia de Trabajo" << endl;
}

Trabajo::Trabajo(string name,string direccion,string correoElec,int numero,string departamento):Contactos(name,direccion,correoElec,numero){
  this->departamento = departamento;
}