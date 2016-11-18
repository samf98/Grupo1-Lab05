#pragma once
#include "Contactos.h"

using std::string;

class ComClase : public Contactos{
	private:
		string claseConocieron;

	public:
		ComClase(string name,string correoElec,int numero,string claseConocieron);

		
		virtual string toString() const;
};
