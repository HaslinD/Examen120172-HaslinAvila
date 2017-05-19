#pragma once

#include <string>

using namespace std;

class ObrasDA{
	private:
                string id;
                string nombre;
                string artista;
                string fechaing;   

	public:
		ObrasDA();
		ObrasDA(string, string, string, string);	 
		string getid();
		string getnombre();
		string getartista();
		string getfechaing();		

};
