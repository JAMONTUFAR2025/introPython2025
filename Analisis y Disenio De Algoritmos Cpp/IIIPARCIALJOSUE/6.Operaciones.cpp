// Josue Alejandro Montufar Zuniga
// 202510050077
// Objetivo del programa: Operaciones con variables enteras y decimales

#include<iostream>
using namespace std;

int main()
{
	int entero1, entero2, suma;
	double decimal1, decimal2, multi, division;
	
	cout<<"Digite dos numeros enteros"<<endl;
	cin>>entero1>>entero2;
	cout<<"Digite dos numeros decimales"<<endl;
	cin>>decimal1>>decimal2;
	
	suma = entero1 + entero2;
	multi = decimal1 * decimal2;
	division = entero1 / decimal2;
	
	
	cout<<"El resultado de la suma de los enteros es: "<<suma<<endl;
	cout<<"El resultado de la multiplicacion de los decimales es: "<<multi<<endl;
	cout<<"El resultado de la division del primer entero  entre el segundo decimal es: "<<division<<endl;
	
	return 0;
}