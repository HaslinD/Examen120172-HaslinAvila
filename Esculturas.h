#pragma once

#include "ObrasDA.h"

using namespace std;

class Esculturas : public ObrasDA{
	public:
		Esculturas();
		Esculturas(string, string, string, string, string, string);
	private:		
		string peso;
		string material;

};
