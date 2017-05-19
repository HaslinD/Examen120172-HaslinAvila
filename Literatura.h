#pragma once

#include "ObrasDA.h"
#include <string>

using namespace std;

class Literatura : public ObrasDA{
	public:
		Literatura();
		Literatura(string, string, string, string, string, string);
		
		string genero;
		string epoca;

};
