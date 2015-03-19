

#include <stdio.h>
float media(float a, float b, float c){
	float p[]={3,3,4};
	float med = (a *p[0] + b *p[1] + c * p[2]) / 10;
	return med;
}

int main(){
	float x, y, z;
	puts("Digite as três notas:");
	scanf("%f %f %f" , &x, &y, &z);
	printf("A media ponderada das tres notas e %f ", media(x,y,z));
	
}


