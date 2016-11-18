ami: Contactos.o Amantes.o Amigo.o main.o Bloqueados.o ComClase.o Familiares.o Pareja.o Trabajo.o
	g++ Contactos.o Amantes.o Amigo.o main.o Bloqueados.o ComClase.o Familiares.o Pareja.o Trabajo.o -o lol
main.o:	main.cpp Amantes.h Amigo.h Contactos.h Bloqueados.h ComClase.h Familiares.h Pareja.h Trabajo.h
	g++ -c main.cpp
Contactos.o:	Contactos.cpp Contactos.h
	g++ -c Contactos.cpp
Amantes.o:	Amantes.cpp Amantes.h Contactos.h
	g++ -c Amantes.cpp
Amigo.o:	Amigo.cpp Amigo.h Contactos.h
	g++ -c Amigo.cpp
Bloqueados.o:	Bloqueados.cpp Bloqueados.h Contactos.h
	g++ -c Bloqueados.cpp
ComClase.o:	ComClase.cpp ComClase.h Contactos.h
	g++ -c ComClase.cpp
Familiares.o:	Familiares.cpp Familiares.h Contactos.h
	g++ -c Familiares.cpp
Pareja.o:	Pareja.cpp Pareja.h Contactos.h
	g++ -c Pareja.cpp
Trabajo.o:	Trabajo.cpp Trabajo.h Contactos.h
	g++ -c Trabajo.cpp
