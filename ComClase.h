#ifndef COMCLASE_H
#define COMCLASE_H
#include "Contactos.h"

using std::string;

class ComClase : public Contactos{
	private:
		string claseConocieron;

	public:
		Comclase(string name,string direccion,string correoElec,int numero,string claseConocieron);
		virtual void imprimir();
		void setClaseConocieron();
		string getClaseConocieron();

};

#endif