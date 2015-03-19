#include <stdio.h>

int main()
{	
	float x,y,z,w,aux;
	puts("Digite quatro numeros para comparar!");
	scanf("%f %f %f %f", &x,&y,&z,&w);
	if (w < x){
		printf("\nA ordem crescente dos numeros sao: %.3f, %.3f, %.3f %.3f",z,y,x,w);
		 
	} else if(w < y){
		printf("\nA ordem crescente dos numeros sao: %.3f, %.3f, %.3f %.3f",z,y,w,x);
	
	}else{
		printf("\nA ordem crescente dos numeros sao: %.3f, %.3f, %.3f %.3f",w,x,y,z );	
	}
}
	



