#include "Bloqueados.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;


Bloqueados::Bloqueados(string name,string correoElec,int numero,int cantidad_odio):Contactos(name,correoElec,numero){
  this->cantidad_odio = cantidad_odio;
}

string Bloqueados::toString()const{
	stringstream ss;
	ss << Contactos::toString()<<" Nivel de Odio: " << cantidad_odio;
	return ss.str();
}
