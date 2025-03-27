// Josue Alejandro Montufar Zuniga
// 202510050077
/* 6. Escriba un programa que lea la nota final de cuatro alumnos
y calcule la nota final media de los cuatro alumnos. */

#include<iostream>

using namespace std;

int main()
{
	double n1, n2, n3, n4, promedio = 0;
	
	cout<<"Digite la nota final del alumno 1: "; cin>>n1;
	cout<<"Digite la nota final del alumno 2: "; cin>>n2;
	cout<<"Digite la nota final del alumno 3: "; cin>>n3;
	cout<<"Digite la nota final del alumno 4: "; cin>>n4;
	
	promedio = (n1 + n2 + n3 + n4) / 4;
	
	cout.precision(2);
	cout<<"\nLa nota final media de los cuatro alumnos es: "<<promedio<<endl;
	
	return 0;
}