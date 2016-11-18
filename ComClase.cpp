#include "Contactos.h"
#include "Comclase.h"
#include <iostreams>

using std::endl;
using std::cout;

Comclase::Comclase(string name,string correoElec,int numero,string claseConocieron):Contactos(name,direccion,correoElec,numero){
  this->departamento = departamento;
}

void Comclase::imprimir(){
	cout << "Esta es una instancia de Comclase" << endl;

}
