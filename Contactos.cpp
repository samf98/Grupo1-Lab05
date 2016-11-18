#include "Contactos.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Contactos::Contactos(string name,string correoElec,int numero):name(name),correoElec(correoElec), numero(numero){
}


Contactos::~Contactos(){
}

string Contactos::toString()const{
	stringstream ss;
	ss << "Contactos: " << name << ", " << correoElec<< ", "<<numero;
	return ss.str();
}

