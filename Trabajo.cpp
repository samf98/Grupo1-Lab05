#include "Contactos.h"
#include "Trabajo.h"
#include <iostream>

using std::endl;
using std::cout;

Trabajo::Trabajo(string name,string correoElec,int numero,string departamento):Contactos(name,correoElec,numero){
  this->departamento = departamento;
}

void Trabajo::imprimir(){
	cout << "Esta es una instancia de Trabajo" << endl;
}
