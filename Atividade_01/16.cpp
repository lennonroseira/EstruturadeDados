

#include <stdio.h>
float salario(float a){
	float newsal = (a * 1.05)*0.93;
	return newsal;
}

int main(){
	float x;
	puts("Digite o salario base!");
	scanf("%f" , &x);
	printf("O seu salario e %.2f reais ", salario(x));
	
}


