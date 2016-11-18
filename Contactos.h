#pragma once
#include <string>
using std::string;

class Contactos{
	string name,direccion;
	int numero;
	string correoElec;
  public:
	Contactos(string, string, string,int=0);
	virtual ~Contactos();
	virtual string toString()const;
};
