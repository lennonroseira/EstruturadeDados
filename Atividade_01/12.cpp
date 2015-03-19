

#include <stdio.h>
float media(float a, float b, float c){
	float med = (a + b + c) / 3;
	return med;
}

int main(){
	float x, y, z;
	puts("Digite as três notas:");
	scanf("%f %f %f" , &x, &y, &z);
	printf("A media das tres notas e %f ", media(x,y,z));
	
}


