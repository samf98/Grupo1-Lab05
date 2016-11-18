#pragma once
#include <sstream>

#include "Contactos.h"

using std::stringstream;

class Bloqueados: public Contactos{
	private:
		int cantidad_odio;
	public:
		Amantes(string name,string direccion,string correoElec,int numero,int cantidad_odio):Contactos(name,direccion,correoElec,numero);
		virtual string toString()const;
};
