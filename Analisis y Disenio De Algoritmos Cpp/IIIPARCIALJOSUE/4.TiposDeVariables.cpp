// Josue Alejandro Montufar Zuniga
// 202510050077
// Objetivo del programa: Capturar variables en C++

#include<iostream>
using namespace std;

int main()
{
	// ** Crearemos 5 tipos de variables **
	// #1 Variable tipo entero (int)
	int edad = 19;
	// #2 Variable de tipo real (float, double)
	double estatura = 1.53;
	// #3 Variable de tipo caracter (char) '2', 'f', '^'
	char genero = 'M';
	// #4 Variable de tipo cadena (string)
	string nombre = "Josue Montufar";
	// #5 Variable de tipo booleana (bool) true/1, false/0
	bool matricula = 1;
	
	cout<<"Edad: "<<edad<<endl;
	cout<<"Estatura: "<<estatura<<endl;
	cout<<"Genero: "<<genero<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Matricula: "<<matricula<<endl;
	
	return 0;
}