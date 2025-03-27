// Josue Alejandro Montufar Zuniga
// 202510050077
// Objetivo del programa: Averiguar que hace el siguiente programa

#include<iostream> // Se incluye la libreria "iostream" que contiene las instrucciones principales de c++
using namespace std; // Se usa el espacio de nombre "standart" std, para no tener que escribir std:: en los cout, cin, etc

int main() // Funcion principal del programa
{ // Llave de apertura del programa, inicia
	int n1, n2, n3; // Define tres variables para los numeros enteros
	double prom; // Define una variable para el promedio de tipo double o real
	
	cout<<"Ingrese tres numeros enteros"<<endl; // Se imprime en pantalla un mensaje al usuario indicando que ingrese el valor de tres numeros enteros
	cin>>n1>>n2>>n3; // Lee los numeros enteros en cada variable, al presionar enter se almacenará el valor del teclado y seguirá con la siguiente variable hasta llegar a la última
	
	prom = (n1 + n2 + n3) / 3; // Se hace la operacion de promedio y su valor se almacena en una variable llamada "prom"
	
	cout<<"El promedio es "<<prom<<endl; // Se imprime un mensaje junto al valor del promedio
	return 0; // El programa devuelve 0 indicando que no hay errores y fin del programa
} // Llave de cierre del programa/ finaliza