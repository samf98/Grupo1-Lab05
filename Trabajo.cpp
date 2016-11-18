#include "Contactos.h"
#include "Trabajo.h"
#include <iostream>

using std::endl;
using std::cout;
using std::string;
using std::stringstream;


Trabajo::Trabajo(string name,string direccion,string correoElec,int numero,string departamento):Contactos(name,direccion,correoElec,numero){
  this->departamento = departamento;
}

Trabajo::~Trabajo(){
}

string Trabajo::tostring()const{
	stringstream ss;
	ss << Contactos::tostring() << "Departamento en el que trabajan: " << endl;
	return ss.str();
}
