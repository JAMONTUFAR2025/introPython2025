// Josue Alejandro Montufar Zuniga
// 202510050077
/* 4. Ejecute el programa del ejercicio anterior con entradas erroneas
y observe los resultados. Por ejemplo, introduzca un dato de tipo
catacter cuando se espera un dato de tipo entero */

#include<iostream>

using namespace std;

int main()
{
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Digite su sexo: "; cin>>sexo;
	cout<<"Digite su altura en metros: "; cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura en metros: "<<altura<<endl;
	
	return 0;
}