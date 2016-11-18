#ifndef PAREJA_H
#define PAREJA_H
#include "Contactos.h"

using std::string;

class Pareja : public Contactos{
	private:
		string date;

	public:
		Pareja(string);
		//fecha en la que comenzaron a salir
		virtual void imprimir();
		void setDate(string);
		string getDate();

};
#endif