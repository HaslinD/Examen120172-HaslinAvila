#include "Literatura.h"
#include <string>

using namespace std;

Literatura::Literatura(){

}

Literatura::Literatura(string genero, string epoca, string id, string nombre, string artista, string fecahing){
	this -> id = id;
	this -> nombre = nombre;
	this -> artista = artista;
	this -> fechaing = fechaing;

	this -> genero = genero;
	this -> epoca = epoca;

}
