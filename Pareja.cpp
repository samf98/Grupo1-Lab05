#include "Pareja.h"
#include <iostream>

using std::cout;
using std::endl; 
using std::string;
using std::stringstream;

Pareja::Pareja(string name,string correoElec,int numero,string date):Contactos(name,correoElec,numero){
  this->date = date;
}


Pareja::~Pareja(){
}


string Pareja::tostring()const{
	stringstream ss;
	ss <<Contactos::tostring() << "Fecha en la que comenzaron a salir: " << endl;
	return ss.str();
}

