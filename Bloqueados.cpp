#include "Bloqueados.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;


Bloqueados::Bloqueados(){
}

Bloqueados::Bloqueados(int cantidad_odio,string name,string direccion,string correoElec,int numero):Contactos(name,direccion,correoElec,numero),name(name),direccion(direccion), correoElec(correoElec), numero(numero){
}

Student::~Student(){
}

Bloqueados::~Bloqueados(){
}

string Bloqueados::toString()const{
	stringstream ss;
	ss << "Nivel de Odio: " << cantidad_odio;
	return ss.str();
}