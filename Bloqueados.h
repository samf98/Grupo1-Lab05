#pragma once
#include <sstream>

#include "Contactos.h"

using std::stringstream;

class Bloqueados: public Contactos{
	private:
		int cantidad_odio;
	public:
		Bloqueados(string name,string correoElec,int numero, int cantidad_odio);
		virtual ~Bloqueados();
		virtual string toString()const;
};
