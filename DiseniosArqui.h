#pragma once

#include "ObrasDA.h"
#include <string>

using namespace std;

class DiseniosArqui : public ObrasDA{
	public: 
		DiseniosArqui();
		DiseniosArqui(string, string, string, string, string);
	
		string disenioter;

};
