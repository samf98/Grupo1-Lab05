#include <sstream>
#include "ComClase.h"
#include <iostream>

using std::endl;
using std::cout;
using std::string;
using std::stringstream;

ComClase::ComClase(string name,string correoElec,int numero,string claseConocieron):Contactos(name,correoElec,numero){
  this->claseConocieron = claseConocieron;
}

ComClase::~ComClase(){
}

string ComClase::toString()const{
	stringstream ss;
	ss << Contactos::toString() << "Clase en la que se conocieron: " << endl;
	return ss.str();
}
