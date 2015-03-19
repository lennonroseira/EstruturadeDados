

#include <stdio.h>
float cm(float a){
	float cent;
	cent = a*100;
	return cent;
}

int main(){
	float x;
	puts("Digite o numero em metros para ser convertido:");
	scanf("%f",&x);
	printf("O valor em cm e %f", cm (x));
	
}


