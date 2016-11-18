#ifndef COMCLASE_H
#define COMCLASE_H
#include "Contactos.h"

using std::string;

class ComClase : public Contactos{
	private:
		string claseConocieron;

	public:
		ComClase(string);
		virtual void imprimir();
		void setClaseConocieron();
		string getClaseConocieron();

}