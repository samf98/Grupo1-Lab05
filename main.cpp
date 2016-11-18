#include <iostream>
#include <string>
#include <vector>
#include "Contacto.h"
#include "Amigo.h"
#include "Pareja.h"
#include "Trabajo.h"
#include "ComClase.h"
#include "Familiares.h"
#include "Amantes.h"
#include "Bloqueados.h"

using namespace std;

int main()
{

	vector<Categoria> categorias;
	menu(categorias);


}

void menu(vector<Categoria> categorias)
{
	int op = 0;
	do
	{
		cout<<"1-Agregar contacto"<<endl<<"2-Eliminar contacto"<<endl<<"3-Escribir archivo"<<endl;
		cin>>op;
		switch(op)
		{
			case 1:
			{
				break;
			}

			case 2:
			{
				break;
			}

			case 3:
			{
				break;
			}
		}
	}while(op == 0);
}

void agregarContacto(vector<Categoria> categorias)
{

}

void eliminarContacto(vector<Categoria> categorias)
{

}

void escribirArchivo(vector<Categoria> categorias)
{

}