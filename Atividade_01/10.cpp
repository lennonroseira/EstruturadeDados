

#include <stdio.h>
float salario(float a, float b){
	float sal = a * b;
	return sal;
}

int main(){
	float x;
	float y;
	puts("Quanto vc ganha por hora?");
	scanf("%f" , &x);
	
	puts("Quantas horas vc trabalha no mes?");
	scanf("%f",&y);
	
	printf("Seu salario e: %f ", salario(x,y));
	
}


