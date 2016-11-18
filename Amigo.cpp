#include "Amigo.h"
#include <iostream>

using std::endl;
using std::cout;
using std::cin;

Amigo::Amigo(string name,string correoElec,int numero,int nivel):Contactos(name,correoElec,numero){
  this->nivel = nivel;
}

void Amigo::imprimir(){
	cout << "Esta es una instancia de un Amigo" << endl;
}

int Amigo::getNivel(){
	return nivel;
}