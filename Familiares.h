#pragma once
#include <sstream>

#include "Contacto.h"

using std::stringstream;

class Familiares: public Contactos{
	private:
		string relacionFam;
	public:
		Familiares(string relacionFam,string name,string direccion,string correoElec,int numero):Contactos(name,direccion,correoElec,numero),name(name),direccion(direccion), correoElec(correoElec), numero(numero);

		virtual string toString()const;
};