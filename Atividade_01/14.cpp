

#include <stdio.h>
float salario(float a){
	float newsal = a * 1.25;
	return newsal;
}

int main(){
	float x;
	puts("Digite o salario antigo!");
	scanf("%f" , &x);
	printf("O novo salario e %.2f reais ", salario(x));
	
}


