#ifndef AMIGO_H
#define AMIGO_H
#include "Contactos.h"

class Amigo : public Contactos{
	private:
		int nivel;

	public:
		Amigo(string name,string direccion,string correoElec,int numero,int nivel);
		virtual void imprimir();
		int getNivel();
};
#endif