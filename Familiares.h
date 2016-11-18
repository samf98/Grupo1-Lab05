#pragma once
#include <sstream>

#include "Contactos.h"

using std::stringstream;

class Familiares: public Contactos{
	private:
		string relacionFam;
	public:
		Familiares(string name,string correoElec,int numero,string relacionFam);
		virtual ~Familiares();
		virtual string toString()const;
};
