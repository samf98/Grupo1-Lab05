#include "Comclase.h"
#include <iostream>

using std::endl;
using std::cout;

void Comclase::imprimir(){
	cout << "Esta es una instancia de Comclase" << endl;

}

Comclase::Comclase(string pClase){
	claseConocieron = pClase;
}