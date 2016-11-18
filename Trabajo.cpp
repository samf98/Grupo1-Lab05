#include "Trabajo.h"
#include <iostream>

using std::endl;
using std::cout;

void Trabajo::imprimir(){
	cout << "Esta es una instancia de Trabajo" << endl;
}

Trabajo::Trabajo(string pDepartamento){
	departamento = pDepartamento;
}