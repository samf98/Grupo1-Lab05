#include <iostream>
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

void eliminarContacto(vector<Contactos>,int);
void escribirArchivo(vector<Contactos>);
void escogerCategoria(vector<Contactos>);
void liberarEspacio(vector<Contactos>);

int main()
{

	vector<Contactos> contactos;
	menu(categorias);


}

void menu(vector<Contactos> contactos)
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
				cout<<"1-Amigo"<<endl<<"2-Pareja"<<endl;
				cout<<"3-Companero de Trabajo"<<endl<<"4-Companero de Clase"<<endl<<"Familiar"<<endl<<"Amante"<<endl<<"Bloqueado"<<endl;
				int cat;
				cin>>cat;
				escogerCategoria(cat);
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
				escribirArchivo();
				break;
			}
		}
	}while(op == 0);
}

void escogerCategoria(int cat, vector<Contactos> contactos )
{
	string nombre;
	string email;
	string telefono;
	cout<<"Ingrese su nombre: ";
	cin.getline(nombre,500,'n');
	cout<< "Ingrese su email: ";
	cin>>email;
	cout<<"Ingrese su telefono: ";
	cin>>telefono;
	int cont = 0;
	for (int i = 0; i < contactos.size(); ++i)
	{
		if(categorias[i]->gettelefono() == telefono)
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
					Contactos* amigo = new Amigo(nivel_a);

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
				Contactos* pareja = new Pareja(fecha_pareja);
				contactos.push_back(pareja);
				break;
			}

			case 3:
			{
				string departamento;
				cout<<"Ingrese departamento en el que trabaja: ";
				cin>>departamento;
				Contactos* companero_t = new Trabajo(departamento);
				contactos.push_back(companero_t);
				break;
			}

			case 4:
			{
				stirng clase;
				cout<<"Ingrese la clase: ";
				cin>> clase;
				Contactos* companero_c = new ComClase(clase);
				contactos.push_back(companero_c);
				break;
			}

			case 5:
			{
				string relacion;
				cout<<"Ingrese la relación familiar: ";
				cin>> relacion;
				Companeros* familia = new Familiares(relacion);
				contactos.push_back(familia);
				break;
			}

			case 6:
			{
				string horario;
				cout<<"Ingrese horas disponibles: ";
				cin>> horario;
				Companeros* amantes = new Amantes(horario);
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
					Companeros* bloqueados = new Bloqueados(odio);
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

void eliminarContacto(vector<Contactos> contactos, int posicion)
{
	contactos.erase(contactos.begin()+posicion);
}

void escribirArchivo(vector<Contactos> contactos)
{
	cout<<"Amigos:"<<endl;
	Amigo amigos;
	for (int i = 0; i < contactos.size(); ++i)
	{
		amigos = dynamic_cast<Amigo*>(contactos[i]) toString();

		if(amigos!=null)
			amigos -> toString();
	}

	cout<<"Pareja:"<<endl;
	Paerja pareja;
	for (int i = 0; i < contactos.size(); ++i)
	{
		pareja = dynamic_cast<Pareja*>(contactos[i]) toString();

		if(pareja!=null)
			pareja -> toString();
	}

	cout<<"Compañeros de Trabajo:"<<endl;
	Trabajo trabajo;;
	for (int i = 0; i < contactos.size(); ++i)
	{
		trabajo = dynamic_cast<Trabajo*>(contactos[i]) toString();

		if(trabajo!=null)
			trabajo -> toString();
	}

	cout<<"Compañeros de Clase:"<<endl;
	ComClase comclase;
	for (int i = 0; i < contactos.size(); ++i)
	{
		comclase = dynamic_cast<ComClase*>(contactos[i]) toString();

		if(comclase!=null)
			comclase -> toString();
	}

	cout<<"Familiares:"<<endl;
	Familiares familiares;
	for (int i = 0; i < contactos.size(); ++i)
	{
		familiares = dynamic_cast<Familiares*>(contactos[i]) toString();

		if(familiares!=null)
			familiares -> toString();
	}

	cout<<"Amantes:"<<endl;
	Amantes amantes;
	for (int i = 0; i < contactos.size(); ++i)
	{
		amantes = dynamic_cast<Amantes*>(contactos[i]) toString();

		if(amantes!=null)
			amantes -> toString();
	}

	cout<<"Bloqueados:"<<endl;
	Bloqueados bloqueados;
	for (int i = 0; i < contactos.size(); ++i)
	{
		bloqueados = dynamic_cast<Bloqueados*>(contactos[i]) toString();

		if(bloqueados!=null)
			bloqueados -> toString();
	}
}

void liberarEspacio(vecto<Contactos> contactos)
{
	
}