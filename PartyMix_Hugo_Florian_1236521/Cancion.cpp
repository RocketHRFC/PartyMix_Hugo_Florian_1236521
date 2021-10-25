#include "Cancion.h"

Cancion::Cancion(string Titulo, string Artista)
{
	this->Titulo = Titulo;
	this->Artista = Artista;
}

string Cancion::getTitutlo()
{
	return this->Titulo;
}

string Cancion::getArtista()
{
	return this->Artista;
}
