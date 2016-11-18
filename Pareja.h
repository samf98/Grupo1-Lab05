#ifndef PAREJA_H
#define PAREJA_H
#include "Contactos.h"

using std::string;

class Pareja : public Contactos{
	private:
		string date;

	public:
		Pareja(string name,string correoElec,int numero,string date);
		//fecha en la que comenzaron a salir
		virtual ~Pareja();
		virtual string tostring() const;

};
#endif