#pragma once
#include <string>
using std::string;

class Contactos{
  protected:	
	string name;
	string direccion;
	string correoElec;
	int numero;
  public:
	Contactos(string, string, string,int=0);
	virtual ~Contactos();
	virtual string toString()const;
};
