#pragma once
#include <sstream>

#include "Contactos.h"

using std::stringstream;

class Amantes: public Contactos{
	private:
		string horario;
	public:
		Amantes(string name,string direccion,string correoElec,int numero,string horario);
		virtual string toString()const;
};
