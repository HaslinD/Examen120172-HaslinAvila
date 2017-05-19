#pragma once

#include "ObrasDA.h"
#include <string>

using namespace std;

class Pinturas : public ObrasDA{
	public:
		Pinturas();
		Pinturas(string, string, string, string, string, string);

		string matlienzo;
		string tecnica;

};
