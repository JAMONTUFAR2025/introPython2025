// Josue Alejandro Montufar Zuniga
// 202510050077
/* 8. Escriba un programa que lea de la entrada estandar los dos catetos de un
triangulo rectangulo y escriba en la salida estandar su hipotenusa. */

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float c1, c2, h = 0;
	
	cout<<"Digite el cateto 1: "; cin>>c1;
	cout<<"Digite el cateto 2: "; cin>>c2;
	
	h = sqrt((pow(c1, 2) + pow(c2, 2)));
	
	cout.precision(2);
	cout<<"\nLa hipotenusa es: "<<h<<endl;
	
	return 0;
}