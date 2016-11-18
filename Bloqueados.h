#pragma once
#include <sstream>

#include "Contactos.h"

using std::stringstream;

class Bloqueados: public Contactos{
	private:
		int cantidad_odio;
	public:
		Bloqueados(int cantidad_odio,string name,string direccion,string correoElec,int numero);
		virtual string toString()const;
};
