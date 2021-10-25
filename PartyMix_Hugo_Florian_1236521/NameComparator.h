#pragma once
#include "Comparator.h"
#include "Cancion.h"
#include <string>

using std::string;

class NameComparator :
	public Comparator<Cancion>
{
public:
	virtual int compare(Cancion a, Cancion b){

		return a.getArtista().compare(b.getArtista());
	}
};

