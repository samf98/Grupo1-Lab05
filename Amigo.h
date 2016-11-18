#ifndef AMIGO_H
#define AMIGO_H
#include "Contactos.h"

class Amigo : public Contactos{
	private:
		int nivel;

	public:
		Amigo(int);
		virtual void imprimir();
		int getNivel();
};
#endif