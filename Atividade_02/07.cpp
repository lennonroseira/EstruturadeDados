#include <stdio.h>

int main()
{	
	float x,y,z,aux;
	int i;
	puts("Insira o valor de I e tres numeros para ordenar!");
	scanf("%d %f %f %f",&i, &x,&y,&z);
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
	switch (i){
	case 1:
		printf("\nA ordem crescente dos numeros sao: %.3f, %.3f, %.3f", x,y,z );
		break;
	case 2:
		printf("\nA ordem decrescente dos numeros sao: %.3f, %.3f, %.3f", z,y,x );
		break;	
	case 3:
		printf("\nA ordem A<B,B>C, C eh: %.3f, %.3f, %.3f", x,z,y );	
	}
}
	
	



