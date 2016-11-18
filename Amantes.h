#pragma once
#include <sstream>

#include "Amantes.h"

using std::stringstream;

class Amantes: public Contactos{
	private:
		string horario;
	public:
		Amantes(string horario,string name,string direccion,string correoElec,int numero):Contactos(name,direccion,correoElec,numero),name(name),direccion(direccion), correoElec(correoElec), numero(numero);
		virtual string toString()const;
};
