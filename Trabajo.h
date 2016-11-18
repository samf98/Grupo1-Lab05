#ifndef TRABAJO_H
#define TRABAJO_H
#include "Contactos.h"

using std::string;

class Trabajo : public Contactos{	
	private:
		string departamento;

	public:
		Trabajo(string name,string direccion,string correoElec,int numero,string departamento);
		virtual void imprimir();
		void setDepartamento();
		string getDepartamento(); 
};

#endif
