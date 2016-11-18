#include "Amantes.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;


Amantes::Amantes(){
}

Amantes::Amantes(string horario,string name,string direccion,string correoElec,int numero):Contactos(name,direccion,correoElec,numero),name(name),direccion(direccion), correoElec(correoElec), numero(numero){
}

Student::~Student(){
}

Amantes::~Amantes(){
}

string Amantes::toString()const{
	stringstream ss;
	ss << "Horario Disponible: " << horario;
	return ss.str();
}