#include "Familiares.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;


Familiares::Familiares(){
}

Familiares::Familiares(string relacionFam):relacionFam(relacionFam){
}

Familiares::~Familiares(){
}

string Familiares::toString()const{
	stringstream ss;
	ss << "Relacion familiar: " << relacionFam;
	return ss.str();
}