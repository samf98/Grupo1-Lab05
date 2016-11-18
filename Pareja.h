#ifndef PAREJA_H
#define PAREJA_H
#include "Contactos.h"

using std::string;

class Pareja : public Contactos{
	private:
		string date;

	public:
		Pareja(string name,string direccion,string correoElec,int numero,string date):Contactos(name,direccion,correoElec,numero);
		//fecha en la que comenzaron a salir
		virtual void imprimir();
		void setDate(string);
		string getDate();

};
#endif