#include "Amigo.h"
#include <iostream>

using std::endl;
using std::cout;
using std::cin;

void Amigo::imprimir(){
	cout << "Esta es una instancia de un Amigo" << endl;
}

Amigo::Amigo(int level){
	nivel = level;
}

int Amigo::getNivel(){return nivel;}