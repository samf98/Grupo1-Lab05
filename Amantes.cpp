#include "Contactos.h"
#include "Amantes.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Amantes::Amantes(string name,string correoElec,int numero,string horario):Contactos(name,direccion,correoElec,numero){
  this->horario = horario;
}


string Amantes::toString()const{
	stringstream ss;
	ss << Contactos::toString()<< " Horario Disponible: " << horario;
	return ss.str();
}

