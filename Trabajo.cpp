
#include "Trabajo.h"
#include <iostream>
#include <sstream>

using std::endl;
using std::cout;
using std::string;
using std::stringstream;



Trabajo::Trabajo(string name,string correoElec,int numero,string departamento):Contactos(name,correoElec,numero){
  this->departamento = departamento;
}

Trabajo::~Trabajo(){
}

string Trabajo::tostring()const{
	stringstream ss;
	ss << Contactos::tostring() << "Departamento en el que trabajan: " << endl;
	return ss.str();

