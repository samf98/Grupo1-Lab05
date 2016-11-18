#include "Pareja.h"
#include <iostream>
#include <sstream>

using std::cout;
using std::endl; 
using std::string;
using std::stringstream;

Pareja::Pareja(string name,string correoElec,int numero,string date):Contactos(name,correoElec,numero){
  this->date = date;
}


Pareja::~Pareja(){
}


string Pareja::toString()const{
	stringstream ss;
	ss <<Contactos::toString() << "Fecha en la que comenzaron a salir: " << endl;
	return ss.str();
}

