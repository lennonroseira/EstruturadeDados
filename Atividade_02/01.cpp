

#include <stdio.h>
float media(float a, float b, float c){
	float med = (a *2 + b *3 + c *5) / 10;
	return med;
}

int main(){
	float x, y, z;
	puts("Digite as três notas:");
	scanf("%f %f %f" , &x, &y, &z);
	float resultado = media(x,y,z);
	printf("A media ponderada das tres notas e %.3f ", resultado);
	  
	  if (resultado >= 8){
		puts("\nConceito A");
	} else if (resultado >= 7 ){
		puts("\nConceito B");
	} else if (resultado >= 6){
		puts("\nConceito C");
	} else if (resultado >= 5){
		puts("\nConceito D");
	} else {
		puts("\nConceito E");
	};	
}


