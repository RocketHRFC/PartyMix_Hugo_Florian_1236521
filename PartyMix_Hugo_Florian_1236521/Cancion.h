#pragma once
#include<string>

using std::string;

class Cancion
{
	string Titulo;
	string Artista;

public:
	Cancion(string Titulo, string Artista);

	string getTitutlo();
	string getArtista();

};

