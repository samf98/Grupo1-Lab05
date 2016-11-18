#pragma once
#include <iostream>
#include <string>
using std::string;
using std::cout;

class Contactos{
  private:	
	string name;
	string correoElec;
	int numero;
  public:
	Contactos(string,string,int=0);
	int gettelefono();
	virtual ~Contactos();
	virtual string toString()const;
};
