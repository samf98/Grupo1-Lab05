#include "Pareja.h"
#include <iostream>

using std::cout;
using std::endl; 

Pareja::Pareja(string name,string direccion,string correoElec,int numero,string date):Contactos(name,direccion,correoElec,numero){
  this->date = date;
}

void Pareja::imprimir(){
	cout << "Esta es una instancia de Pareja" << endl;

} 


