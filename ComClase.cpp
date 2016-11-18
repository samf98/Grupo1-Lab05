#include "Contactos.h"
#include "Comclase.h"
#include <iostreams>

using std::endl;
using std::cout;
using std::string;
using std::stringstream;

Comclase::Comclase(string name,string correoElec,int numero,string claseConocieron):Contactos(name,correoElec,numero){
  this->departamento = departamento;
}

Comclase::~Comclase(){
}

string Comclase::tostring()const{
	stringstream ss;
	ss << Contactos::tostring() << "Clase en la que se conocieron: " << endl;
	return ss.str();
}
