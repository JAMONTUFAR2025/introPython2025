// Josue Alejandro Montufar Zuniga
// 202510050077
/* 10. Escriba un programa que calcule las soluciones de una ecuacion de segundo
grado de la forma ax^2 + bx + c = 0, teniendo en cuenta que: x=(-b+-(b^2-4*a*c)^1/2)/2*a */

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float a, b, c, x1 = 0, x2 = 0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	
	x1 = (-b + sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
	x2 = (-b - sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
	
	cout<<"\nLa primera solucion es: x1 = "<<x1<<endl;
	cout<<"La segunda solucion es: x2 = "<<x2<<endl;
	
	return 0;
}