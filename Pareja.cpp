#include "Pareja.h"
#include <iostream>

using std::cout;
using std::endl; 

void Pareja::imprimir(){
	cout << "Esta es una instancia de Pareja" << endl;

} 

Pareja::Pareja(string monamie){
	date = monamie;
}