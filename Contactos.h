#pragma once
#include <string>
using std::string;

class Contactos{
  private:	
	string name;
	string correoElec;
	int numero;
  public:
	Contactos(string,string,int=0);
	virtual ~Contactos();
	virtual string toString()const;
};
