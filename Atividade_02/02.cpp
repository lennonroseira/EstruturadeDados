

#include <stdio.h>
float media(float a, float b, float c){
	float med = (a + b + c) / 3;
	return med;
}

int main(){
	float x, y, z, need;
	puts("Digite as três notas:");
	scanf("%f %f %f" , &x, &y, &z);
	float resultado = media(x,y,z);
	printf("A media aritmetica das tres notas e %.3f ", resultado);
	  
	  if (resultado >= 7){
		puts("\nAprovado");
	} else if (resultado >= 3 ){
		puts("\nExame");
		need = (6 - resultado)*3;
		printf("Voce precisa tirar %.3f", need);
	} else {
		puts("\nReprovado");
	};	
}


