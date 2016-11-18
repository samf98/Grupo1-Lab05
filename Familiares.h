#pragma once
#include <sstream>

#include "Contactos.h"

using std::stringstream;

class Familiares: public Contactos{
	private:
		string relacionFam;
	public:
		Familiares(string name,string direccion,string correoElec,int numero,string relacionFam);

		virtual string toString()const;
};