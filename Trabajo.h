#ifndef TRABAJO_H
#define TRABAJO_H
#include "Contactos.h"

using std::string;

class Trabajo : public Contactos{	
	private:
		string departamento;

	public:
		Trabajo(string name,string correoElec,int numero,string departamento);

		virtual ~Trabajo();
		virtual string tostring() const;
};

#endif
