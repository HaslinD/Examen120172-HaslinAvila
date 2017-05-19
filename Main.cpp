#include <string>
#include <iostream>
#include "ObrasDA.h"
#include "Literatura.h"
#include "Pinturas.h"
#include "Esculturas.h"
#include "DiseniosArqui.h"

using namespace std;

int menu();

int main(){
	bool salir = false;
	string nombre, artista, fechaing; 	

        while (!salir){
		switch(menu()){
			case 1:{
				while (!salir){
                			switch(menu()){
                        		case 1:{
						string genero, epoca;
						cout << "Ingrese el Nombre de la Obra: ";
						cin >> nombre;
						cout << "El nombre del Autor de la Obra: ";
						cin >> artista;
						cout << "Ingrese la Fecha de ingreso: ";
						cin >> fechaing;
                                		break;}
                        		case 2:{

                                		break;}
                        		case 3:{

                                		break;}
                        		case 4:{

                                		break;}

                        		case 5:{
                                		salir = true;
                                		break;}
                			}
        			}			
				break;}
           		case 2:{
                
                		break;}
			case 3:{

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

