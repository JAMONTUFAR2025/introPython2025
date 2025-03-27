// Josue Alejandro Montufar Zuniga
// 202510050077
// Objetivo del programa: Conversion de temperatura

#include<iostream>
using namespace std;

int main()
{
	double celsius, fahrenheit;
	
	cout<<"Digite los Grados Celsius"<<endl;
	cin>>celsius;
	
	fahrenheit = (celsius * 9 / 5) + 32;
	
	cout<<"Con "<<celsius<<" Grados Celsius tenemos "<<fahrenheit<<" Grados Fahrenheit"<<endl;
	
	return 0;
}