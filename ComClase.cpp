#include "Comclase.h"
#include <iostream>

using std::endl;
using std::cout;

void Comclase::imprimir(){
	cout << "Esta es una instancia de Comclase" << endl;

}

Comclase::Comclase(string pClase){
	claseConocieron = pClase;
}

Comclase::Comclase(string name,string direccion,string correoElec,int numero,string claseConocieron):Contactos(name,direccion,correoElec,numero){
  this->departamento = departamento;
}