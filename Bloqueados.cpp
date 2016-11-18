#include "Contacto.h"
#include "Bloqueados.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;


Amantes::Amantes(string name,string direccion,string correoElec,int numero,int cantidad_odio):Contactos(name,direccion,correoElec,numero){
  this->cantidad_odio = cantidad_odio;
}

Bloqueados::~Bloqueados(){
}

string Bloqueados::toString()const{
	stringstream ss;
	ss << "Nivel de Odio: " << cantidad_odio;
	return ss.str();
}