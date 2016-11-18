#include "Familiares.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;


Familiares::Familiares(){
}

Familiares::Familiares(string relacionFam,string name,string direccion,string correoElec,int numero):Contactos(name,direccion,correoElec,numero),name(name),direccion(direccion), correoElec(correoElec), numero(numero){
}

Student::~Student(){
}

Familiares::~Familiares(){
}

string Familiares::toString()const{
	stringstream ss;
	ss << "Relacion familiar: " << relacionFam;
	return ss.str();
}