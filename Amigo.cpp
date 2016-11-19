#include "Amigo.h"
#include <iostream>
#include <sstream>

using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::stringstream;


Amigo::Amigo(string name,string correoElec,int numero,int nivel):Contactos(name,correoElec,numero){
  this->nivel = nivel;
}
Amigo::~Amigo(){
}


string Amigo::tostring()const{
	stringstream ss;
	ss <<Contactos::toString()<< "Nivel de amigo: " << nivel;
        cout <<Contactos::toString()<< "Nivel de amigo: " << nivel;

	return ss.str();
}
