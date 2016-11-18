#ifndef FAMILIARES_H
#define FAMILIARES_H
#include <sstream>

#include "Contacto.h"

using std::stringstream;

class Familiares: public Contacto{
	private:
		string relacionFam;
	public:
		
		virtual string toString()const;
};

#endif