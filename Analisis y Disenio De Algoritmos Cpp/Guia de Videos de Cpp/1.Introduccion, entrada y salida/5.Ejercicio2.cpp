// Josue Alejandro Montufar Zuniga
// 202510050077
/* 2. Escribe un programa que lea de la entrada estandar el precio de un producto 
y muestre en la salida estandar el precio del producto al aplicarle el IVA. */

#include<iostream>

using namespace std;

int main()
{
	double precio, precioConIVA = 0;
	
	cout<<"Digite el precio del producto en lempiras: "; cin>>precio;
	
	precioConIVA = precio + (precio * 0.15);
	
	cout<<"\nEl precio del producto con IVA es: "<<precioConIVA<<" lempiras."<<endl;
	
	return 0;
}