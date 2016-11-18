#pragma once
#include <sstream>

#include "Contacto.h"

using std::stringstream;

class Bloqueados: public Contactos{
	private:
		int cantidad_odio;
	public:
		Bloqueados(int cantidad_odio,string name,string direccion,string correoElec,int numero):Contactos(name,direccion,correoElec,numero),name(name),direccion(direccion), correoElec(correoElec), numero(numero);
		virtual string toString()const;
};