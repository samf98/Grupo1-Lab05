#include "Pareja.h"
#include <iostream>

using std::cout;
using std::endl; 

Pareja::Pareja(string name,string correoElec,int numero,string date):Contactos(name,correoElec,numero){
  this->date = date;
}

void Pareja::imprimir(){
	cout << "Esta es una instancia de Pareja" << endl;

} 


