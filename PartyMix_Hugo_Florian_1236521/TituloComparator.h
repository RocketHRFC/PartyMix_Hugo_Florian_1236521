#pragma once
#include "Comparator.h"
#include "Cancion.h"
#include <string>

using std::string;

class TituloComparator :
	public Comparator<Cancion>
{
public:
	virtual int compare(Cancion a, Cancion b) {

		return a.getTitutlo().compare(b.getTitutlo());
	}
};

