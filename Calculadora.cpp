#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cmath>
#include <iomanip>

using std::cout;
using std::endl;
using namespace std;

int main(void){
    int salir =1;
    int op=0;
    double res;
	double dato;
    do{
		res=0;
		dato=0;
	    cout<<"Calculadora geométrica" << endl;
		cout<<"Ingresa una operacion a realizar"<< endl;
		cout<<"1.- Suma"<< endl;
		cout<<"2.- Resta"<< endl;
		cout<<"3.- Multiplicación"<< endl;
		cout<<"4.- División"<< endl;
		cout<<"5.- Perímetro de círculo"<< endl;
		cout<<"6.- Área de círculo"<< endl;
		cout<<"7.- Perímetro de triángulo"<< endl;
		cout<<"8.- Área de triángulo"<< endl;
		cout<<"0.- Salir"<< endl;
		cin >> op;
		switch(op) {
			case 0:
				cout<<"Cerrando Programa"<< endl;
				salir=2;
				return 0;
			break;
			case 1:
				do{
					cout<<"SUMA"<< endl;
					cout<<"Escribe el primer número:"<< endl;
					cin >> res;
					do{
						cout<<"Escribe el siguente número:"<< endl;
						cin >> dato;
						res +=dato;
						cout<<"Presiona 1 para agregar otro dato"<< endl;
						cout<<"Presiona otro numero para tener el resultado"<< endl;
						cin >> op;
					}while(op==1);
					cout<<"El resultado es"<< res <<endl;
					cout<<"Presiona 1 para agregar otro dato"<< endl;
					cout<<"Presiona otro numero regresar al menú"<< endl;
					cin >> op;
				}while(op==1);	
			break;
			case 2:
				do{
					cout<<"RESTA"<< endl;
					cout<<"Escribe el primer número:"<< endl;
					cin >> res;
					do{
						cout<<"Escribe el siguente número:"<< endl;
						cin >> dato;
						res -=dato;
						cout<<"Presiona 1 para agregar otro dato"<< endl;
						cout<<"Presiona otro numero para tener el resultado"<< endl;
						cin >> op;
					}while(op==1);
					cout<<"El resultado es"<< res <<endl;
					cout<<"Presiona 1 para agregar otro dato"<< endl;
					cout<<"Presiona otro numero regresar al menú"<< endl;
					cin >> op;
				}while(op==1);
			 break;
			case 3:
				do{
					cout<<"MULTIPLICACION"<< endl;
					cout<<"Escribe el primer número:"<< endl;
					cin >> res;
					cout<<"Escribe el segundo número:"<< endl;
					cin >> dato;
					res=res*dato;
					cout<<"El resultado es"<< res <<endl;
					cout<<"Presiona 1 para agregar otro dato"<< endl;
					cout<<"Presiona otro numero regresar al menú"<< endl;
					cin >> op;
				}while(op==1);	
			break;
			case 4:
				do{
					cout<<"DIVISION"<< endl;
					cout<<"Escribe el divisor:"<< endl;
					cin >> res;
					cout<<"Escribe el dividendo:"<< endl;
					cin >> dato;
					do{
						cout<<"El dividendo no puede ser 0 ingresa otro numero"<< endl;
						cin >> dato;
					}while(dato==0);
					res=res/dato;
					cout<<"El resultado es"<< res <<endl;
					cout<<"Presiona 1 para agregar otro dato"<< endl;
					cout<<"Presiona otro numero regresar al menú"<< endl;
					cin >> op;
				}while(op==1);
			break;
			case 5:
				do{
					cout<<"PERIMETRO DEL CIRCULO"<< endl;
					cout<<"Como deseas calcular el perimetro"<< endl;
					cout<<"1.- Radio"<< endl;
					cout<<"2.- Diametro"<< endl;
					cin >> op;
					if (op==1){
						cout<<"Ingresa el radio"<< endl;
						cin >> dato;
						res = 2*M_PI*dato;
					}else if (op==2){
						cout<<"Ingresa el diametro"<< endl;
						cin >> dato;
						res = M_PI*dato;
					}else{
						cout<<"Operacion no valida";
					}
					cout<<"El resultado es"<< res <<endl;
					cout<<"Presiona 1 para agregar otro dato"<< endl;
					cout<<"Presiona otro numero regresar al menú"<< endl;
					cin >> op;
				}while(op==1);
			break;
			case 6:
				do{
					cout<<"AREA DEL CIRCULO"<< endl;
					cout<<"Como deseas calcular el area"<< endl;
					cout<<"1.- Radio"<< endl;
					cout<<"2.- Diametro"<< endl;
					cin >> op;
					if (op==1){
						cout<<"Ingresa el radio"<< endl;
						cin >> dato;
						res = M_PI*pow(dato, 2);
					}else if (op==2){
						cout<<"Ingresa el diametro"<< endl;
						cin >> dato;
						res = M_PI*pow(dato/2, 2);
					}else{
						cout<<"Operacion no valida";
					}
					cout<<"El resultado es"<< res <<endl;
					cout<<"Presiona 1 para agregar otro dato"<< endl;
					cout<<"Presiona otro numero regresar al menú"<< endl;
					cin >> op;
				}while(op==1);
			break;
			case 7:
				do{
					cout<<"Perimetro del Triangulo"<< endl;
					cout<<"Selecciona el tipo de triangulo"<< endl;
					cout<<"1.- Triangulo equilatero"<< endl;
					cout<<"2.- Triangulo isoceles"<< endl;
					cout<<"2.- Triangulo escaleno"<< endl;
					cin >> op;
					if (op==1){
						cout<<"Ingresa la longitud"<< endl;
						cin >> dato;
						res =3*dato;
					}else if (op==2){
						cout<<"Ingresa los lados iguales"<< endl;
						cin >> dato;
						res =2*dato;
						cout<<"Ingresa el lado restante"<< endl;
						cin >> dato;
						res +=dato;
					}else if (op==3){
						for(op=1; op<4; op++){
							cout<<"Ingresa el lado "<<op << endl;
							cin >> dato;
							res +=dato;
						}
					}else{
						cout<<"Operacion no valida";
					}
					cout<<"El resultado es"<< res <<endl;
					cout<<"Presiona 1 para agregar otro dato"<< endl;
					cout<<"Presiona otro numero regresar al menú"<< endl;
					cin >> op;
				}while(op==1);
			break;
			case 8:
				do{
					cout<<"Area del Triangulo"<< endl;
					cout<<"Ingresa la base"<< endl;
					cin >> res;
					cout<<"Ingresa la altura"<< endl;
					cin >> dato;
					res=(res*dato)/2;
					cout<<"El resultado es"<< res <<endl;
					cout<<"Presiona 1 para agregar otro dato"<< endl;
					cout<<"Presiona otro numero regresar al menú"<< endl;
					cin >> op;
				}while(op==1);
			break;
			default:
				cout<<"Operacion no valida";
			break;	
		}
	}while(salir==2);
}