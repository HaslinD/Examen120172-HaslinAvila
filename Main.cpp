#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include "ObrasDA.h"
#include "Literatura.h"
#include "Pinturas.h"
#include "Esculturas.h"
#include "DiseniosArqui.h"

using namespace std;

int menu();
int menu2();
string RandomHexadecimal();
void Reporte(vector<ObrasDA>);

int main(){
	vector<ObrasDA>museo;
	vector<ObrasDA>transferencia;
	bool salir = false;
	string nombre, artista, fechaing; 	
	
        while (!salir){
		switch(menu()){
			case 1:{
				while (!salir){
                			switch(menu()){
                        		case 1:{
						string genero, epoca;
					        string id = RandomHexadecimal();

						cout << "Obras de Literatura" << endl;
						cout << "Ingrese el Nombre de la Obra: ";
						cin >> nombre;
						cout << "El nombre del Autor de la Obra: ";
						cin >> artista;
						cout << "Ingrese la Fecha de ingreso: ";
						cin >> fechaing;
						cout << "Ingrese El genero de la Obra: ";
						cin >> genero;
						cout << "Ingrese la epoca de la Obra: ";
						cin >> epoca;
						Literatura literatura(genero, epoca, id, nombre, artista, fechaing); 
						museo.push_back(literatura);
					
                                		break;}
                        		case 2:{
						string peso, material;
					        string id = RandomHexadecimal();

						cout << "Esculturas" << endl;
						cout << "Ingrese el Nombre de la Obra: ";
                                                cin >> nombre;
                                                cout << "El nombre del Autor de la Obra: ";
                                                cin >> artista;
                                                cout << "Ingrese la Fecha de ingreso: ";
                                                cin >> fechaing;
						cout << "Ingrese el peso de la escultura: ";
						cin >> peso;
						cout << "Ingrese el material de la Escultura: ";
						cin >> material;
						Esculturas esculturas(peso, material, id, nombre, artista, fechaing);
						museo.push_back(esculturas);
												
                                		break;}
                        		case 3:{
						string matlienzo, tecnica;
					        string id = RandomHexadecimal();

						cout << "Pinturas" << endl;
						cout << "Ingrese el Nombre de la Obra: ";
                                                cin >> nombre;
                                                cout << "El nombre del Autor de la Obra: ";
                                                cin >> artista;
                                                cout << "Ingrese la Fecha de ingreso: ";
                                                cin >> fechaing;
						cout << "Ingrese el material del lienzo:  ";
						cin >> matlienzo;
						cout << "Ingrese la tecnica usada en el lienzo: ";
						cin >> tecnica;						
						Pinturas pinturas(matlienzo, tecnica, id, nombre, artista, fechaing);
						museo.push_back(pinturas);

                                		break;}
                        		case 4:{
						string tipoTerreno;
					        string id = RandomHexadecimal();

						cout << "Diseños Arquitectonicos" << endl;
						cout << "Ingrese el Nombre de la Obra: ";
                                                cin >> nombre;
                                                cout << "El nombre del Autor de la Obra: ";
                                                cin >> artista;
                                                cout << "Ingrese la Fecha de ingreso: ";
                                                cin >> fechaing;
						cout << "Ingrese el tipo de terreno donde fue desiñado: ";
						cin >> tipoTerreno;
						DiseniosArqui diseniosarqui(tipoTerreno, id, nombre, artista, fechaing);
						museo.push_back(diseniosarqui);
						
                                		break;}
                        		case 5:{
                                		salir = true;
                                		break;}
                			}
        			}			
				break;}
           		case 2:{
             			int number;
				cout << "Ingrese la posicion que quiere eliminar: " << endl;
				for(int i = 0; i < museo.size(); i++){
					cout << i << " --> " << museo[i].getnombre() << endl;
				}
				cin >> number;
				museo.erase(museo.begin() + number);
				cout << "Obra ha eliminada" << endl;	
                		break;}
			case 3:{
				int numero;
				cout << "Ingrese la posicion que quiere Transferir: " << endl;
                                for(int i = 0; i < museo.size(); i++){
                                        cout << i << " --> " << museo[i].getnombre() << endl;
                                }
				cin >> numero;
				tranferencia.push_back(museo[numero]);
				museo.erase(museo.begin() + number);
                                cout << "Obra ha sido transferida" << endl;
				break;}
			case 4:{
				
				break;}
	     		case 5:{
				salir = true;
				break;}
		}
	}
	
	return 0;
}

void Reporte(vector<ObrasDA> obras){
	cout << "Obras de Arte" << endl;
	for(int i = 0; i < obras.size(); i++){
		cout << "--------------------------------------" << endl;
		cout << "Obra: " << (i) << endl;
		cout << "Nombre: " << obras.at(i).getnombre() << endl;
		cout << "Id: " << obras.at(i).getid() << endl;
		cout << "Artista: " << obras.at(i).getartista() << endl;
		cout << "Fecha: " << obras.at(i).getfechaing() << endl;
		cout << "--------------------------------------" << endl;
	}
}

string RandomHexadecimal(){
	int random;
	stringstream random2;
	string random3;
	for(int i = 0; i < 6; i++){
		random = rand() % 15 + o;
		if(random == 10){
			random2 << "A";
		} else if(random == 11){
                        random2 << "B";
                } else if(random == 12){
                        random2 << "C";
                } else if(random == 13){
                        random2 << "D";
                } else if(random == 14){
                        random2 << "E";
                } else if(random == 15){
                        random2 << "F";
                } else {
			random2 << random;
		}
	}
	random3 = random2.str();
	return random3;
}

int menu(){
    int opcion;
    bool valido = true;
    do{
        cout << "-----MENU------" << endl
             << "1.- Crear Obra de Arte" << endl
             << "2.- Eliminar Obra de Arte" << endl
             << "3.- Transferir Obra" << endl 
	     << "4.- Reportes" << endl
	     << "5.- Salir" << endl; 

        cout << " Ingrese una opción: ";
        cin >> opcion;

        if (opcion > 0 && opcion < 6)
            valido = true;
        else {
            cout << "Opción no válida, intente de nuevo ..." << endl;
        }
        cout << "----------------------" << endl;
                
    }while(!valido);
    return opcion;
}

int menu2(){
    int opcion;
    bool valido = true;
    do{
        cout << "-----MENU2------" << endl
             << "1.- Literatura" << endl
             << "2.- Esculturas" << endl
             << "3.- Pinturas" << endl
             << "4.- Diseños Arquitectonicos" << endl
             << "5.- Salir" << endl;

        cout << " Ingrese una opción: ";
        cin >> opcion;

        if (opcion > 0 && opcion < 6)
            valido = true;
        else {
            cout << "Opción no válida, intente de nuevo ..." << endl;
        }
        cout << "----------------------" << endl;

    }while(!valido);
    return opcion;
}

