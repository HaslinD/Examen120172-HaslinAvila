#include "ObrasDA.h"
#include <string>

ObrasDA::ObrasDA(){

}

ObrasDA::ObrasDA(string id, string nombre, string artista, string fecahing){
	this -> id = id;
	this -> nombre = nombre;
	this -> artista = artista;
	this -> fechaing = fechaing;

}

string ObrasDA::getid(){
	return id;
}

string ObrasDA::getnombre(){
	return nombre;
}

string ObrasDA::getartista(){
	return artista;
}

string ObrasDA::getfechaing(){
	return fechaing;
}
