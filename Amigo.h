#ifndef AMIGO_H
#define AMIGO_H
#include "Contacto.h"

class Amigo : public Contacto{
	private:
		int nivel;

	public:
		Amigo();
		virtual void imprimir();
		int getNivel();
};
#endif