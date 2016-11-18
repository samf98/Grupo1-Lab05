#include "Contactos.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Contactos::Contactos(string name, string direccion,string correoElec,int numero):name(name), direccion(direccion), correoElec(correoElec), numero(numero){
}


Contactos::~Contactos(){
}

string Contactos::toString()const{
	stringstream ss;
	ss << "Contactos: " << name << ", " << direccion << ", " << correoElec<< ", "<<numero;
	return ss.str();
}

