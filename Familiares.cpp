#include "Contactos.h"
#include "Familiares.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Familiares::Familiares(string name,string correoElec,int numero,string relacionFam):Contactos(name,correoElec,numero){
	this->relacionFam=relacionFam;
}

Familiares::~Familiares(){
}

string Familiares::toString()const{
	stringstream ss;
	ss << Contactos::toString() << "Relacion familiar: " << relacionFam;
	return ss.str();
}