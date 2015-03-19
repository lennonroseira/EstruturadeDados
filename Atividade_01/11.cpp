

#include <stdio.h>
float conv(float a){
	float celsius = 5* (a-32) / 9;
	return celsius;
}

int main(){
	float x;
	puts("Qual a temperatura em Farenheit?");
	scanf("%f" , &x);
	
	printf("A temperatura eh de %fC ", conv(x));
	
}


