#pragma once

#include <string>

using namespace std;

class ObrasDA{
	public:
		ObrasDA();
		ObrasDA(string, string, string, string);	 
		string getid();
		string getnombre();
		string getartista();
		string getfechaing();		

		string id;
                string nombre;
                string artista;
                string fechaing;

};
