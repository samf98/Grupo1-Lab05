#include "Contactos.h"
#include "Familiares.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;



Familiares::Familiares(string name,string direccion,string correoElec,int numero,string relacionFam):Contactos(name,direccion,correoElec,numero){
	this->relacionFam=relacionFam;
}

Familiares::~Familiares(){
}

string Familiares::toString()const{
	stringstream ss;
	ss << "Relacion familiar: " << relacionFam;
	return ss.str();
}