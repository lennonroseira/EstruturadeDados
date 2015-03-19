#include <stdio.h>

int main()
{	
	float x,y,z, aux;
	puts("Digite tres numeros para comparar!");
	scanf("%f %f %f", &x,&y,&z);
	if (x>y){
		aux = x;
		x = y;
		y = aux;
	} if (y>z){
		aux = y;
		y = z;
		z = aux; 
	} if (x>y){
		aux = x;
		x = y;
		y = aux; 
	}
		printf("\nA ordem crescente dos numeros sao: %.3f, %.3f, %.3f", x,y,z );	
	}
	
	



