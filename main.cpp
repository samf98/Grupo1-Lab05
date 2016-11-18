#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Contactos.h"
#include "Amigo.h"
#include "Pareja.h"
#include "Trabajo.h"
#include "ComClase.h"
#include "Familiares.h"
#include "Amantes.h"
#include "Bloqueados.h"

using namespace std;

void menu(vector<Contactos*>);
void eliminarContacto(vector<Contactos*>,int);
void escribirArchivo(vector<Contactos*>);
void escogerCategoria(int,vector<Contactos*>);
void liberarEspacio(vector<Contactos*>);

int main()
{

	vector<Contactos*> contactos;
	menu(contactos);


}

void menu(vector<Contactos*> contactos)
{
	int op = 0;
	do
	{
		cout<<"1-Agregar contacto"<<endl<<"2-Eliminar contacto"<<endl<<"3-Escribir archivo e imprimir"<<endl;
		cin>>op;
		switch(op)
		{
			case 1:
			{
				cout<<"1-Amigo"<<endl<<"2-Pareja"<<endl;
				cout<<"3-Companero de Trabajo"<<endl<<"4-Companero de Clase"<<endl<<"5-Familiar"<<endl<<"6-Amante"<<endl<<"7-Bloqueado"<<endl;
				int cat;
				cin>>cat;
				escogerCategoria(cat,contactos);
				break;
			}

			case 2:
			{
				int posicion;
				cout<<"Escoja la posición que va a eliminar: ";
				cin>>posicion;
				eliminarContacto(contactos, posicion);
				break;
			}

			case 3:
			{

				escribirArchivo(contactos);
				break;
			}
		}
		cout<<"Salir?[0=No||1==Si]"<<endl;
		cin>>op;
	}while(op == 0);
}

void escogerCategoria(int cat, vector<Contactos*> contactos)
{
	string nombre;
	string email;
	int telefono;
	cout<<"Ingrese su nombre: ";
	cin>>nombre;
	cout<< "Ingrese su email: ";
	cin>>email;
	cout<<"Ingrese su telefono: ";
	cin>>telefono;
	int cont = 0;
	for (int i = 0; i < contactos.size(); ++i)
	{
		if(contactos.at(i)->gettelefono() == telefono)
			cont++;
	}
	if(cont==0){
		switch(cat)
		{
			case 1:
			{
				int nivel_a;
				cout<<"Ingrese nivel de amistad(1-100): ";
				cin>>nivel_a;
				if(nivel_a>=1&&nivel_a<=100)
				{
					Contactos* amigo = new Amigo(nombre,email,telefono,nivel_a);

					contactos.push_back(amigo);
				}
				else
					cout<<nivel_a<<" no es válido."<<endl;
				break;
			}

			case 2:
			{
				string fecha_pareja;
				cout<<"Ingrese la fecha: ";
				cin>> fecha_pareja;
				Contactos* pareja = new Pareja(nombre,email,telefono,fecha_pareja);
				contactos.push_back(pareja);
				break;
			}

			case 3:
			{
				string departamento;
				cout<<"Ingrese departamento en el que trabaja: ";
				cin>>departamento;
				Contactos* companero_t = new Trabajo(nombre,email,telefono,departamento);
				contactos.push_back(companero_t);
				break;
			}

			case 4:
			{
				string clase;
				cout<<"Ingrese la clase: ";
				cin>> clase;
				Contactos* companero_c = new ComClase(nombre,email,telefono,clase);
				contactos.push_back(companero_c);
				break;
			}

			case 5:
			{
				string relacion;
				cout<<"Ingrese la relación familiar: ";
				cin>> relacion;
				Contactos* familia = new Familiares(nombre,email,telefono,relacion);
				contactos.push_back(familia);
				break;
			}

			case 6:
			{
				string horario;
				cout<<"Ingrese horas disponibles: ";
				cin>> horario;
				Contactos* amantes = new Amantes(nombre,email,telefono,horario);
				contactos.push_back(amantes);
				break;
			}

			case 7:
			{
				int odio;
				cout<< "Ingrese el nivel de odio(1-100): ";
				cin>> odio;
				if(odio>=1&&odio<=100)
				{
					Contactos* bloqueados = new Bloqueados(nombre,email,telefono,odio);
					contactos.push_back(bloqueados);
				}
				else
					cout<<odio<<" no es válido."<<endl;
				break;
			}
		}
	}
	else
		cout<<"Número no válido"<<endl;
}

void eliminarContacto(vector<Contactos*> contactos, int posicion)
{
	contactos.erase(contactos.begin()+posicion);
}

void escribirArchivo(vector<Contactos*> contactos)
{
	ofstream archivo;
	archivo.open("Contactos.txt");
	cout<<"Amigos:"<<endl;
	for (int i = 0; i < contactos.size(); ++i)
	{
		Amigo* amigos = dynamic_cast<Amigo*>(contactos.at(i));

		if(amigos!=NULL){
			cout<<amigos -> toString()<<endl;
			archivo << amigos-> toString()<<endl;
		}
	}

	cout<<"Pareja:"<<endl;
	for (int i = 0; i < contactos.size(); ++i)
	{
		Pareja* pareja = dynamic_cast<Pareja*>(contactos.at(i));

		if(pareja!=NULL){
			cout<<pareja -> toString()<<endl;
			archivo << pareja-> toString()<<endl;
		}
	}

	cout<<"Compañeros de Trabajo:"<<endl;
	for (int i = 0; i < contactos.size(); ++i)
	{
		Trabajo* trabajo = dynamic_cast<Trabajo*>(contactos.at(i));

		if(trabajo!=NULL){
			cout<<trabajo -> toString()<<endl;
			archivo << trabajo-> toString()<<endl;
		}
	}

	cout<<"Compañeros de Clase:"<<endl;
	for (int i = 0; i < contactos.size(); ++i)
	{
		ComClase* comclase = dynamic_cast<ComClase*>(contactos.at(i));

		if(comclase!=NULL){
			cout<<comclase -> toString()<<endl;
			archivo << comclase-> toString()<<endl;
		}
	}

	cout<<"Familiares:"<<endl;
	for (int i = 0; i < contactos.size(); ++i)
	{
		Familiares* familiares = dynamic_cast<Familiares*>(contactos.at(i));

		if(familiares!=NULL){
			cout<<familiares -> toString()<<endl;
			archivo << familiares-> toString()<<endl;
		}
	}

	cout<<"Amantes:"<<endl;
	for (int i = 0; i < contactos.size(); ++i)
	{
		Amantes* amantes = dynamic_cast<Amantes*>(contactos.at(i));

		if(amantes!=NULL){
			cout<< amantes -> toString()<<endl;
			archivo << amantes-> toString()<<endl;
		}
	}

	cout<<"Bloqueados:"<<endl;
	for (int i = 0; i < contactos.size(); ++i)
	{
		Bloqueados* bloqueados = dynamic_cast<Bloqueados*>(contactos.at(i));

		if(bloqueados!=NULL){
					cout<<bloqueados -> toString()<<endl;
					archivo <<bloqueados -> toString()<<endl;
		}
	}
}

void liberarEspacio(vector<Contactos*> contactos)
{

}