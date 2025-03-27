// Josue Alejandro Montufar Zuniga
// 202510050077
// Objetivo del programa: Calculo del area y perimetro de un rectangulo

#include<iostream>
using namespace std;

int main()
{
	double base, altura, area, perimetro;
	
	cout<<"Ingrese la base en centimetros"<<endl;
	cin>>base;
	
	cout<<"Ingrese la altura en centimetros"<<endl;
	cin>>altura;
	
	area = base * altura;
	perimetro = 2 * (base + altura);
	
	cout<<"El area del rectangulo es: "<<area<<" centimetros cuadrados"<<endl;
	cout<<"El perimetro del rectangulo es: "<<perimetro<<" centimetros"<<endl;
	
	return 0;
}