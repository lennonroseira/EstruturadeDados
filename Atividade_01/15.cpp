

#include <stdio.h>
float salario(float a, float b){
	float aumento = 1 + b / 100;
	float newsal = a * aumento;
	return newsal;
}

int main(){
	float x,y;
	puts("Digite o salario antigo!");
	scanf("%f" , &x);
	puts("Digite o percentual de aumento!");
	scanf("%f" , &y);
	printf("O novo salario e %.2f reais ", salario(x,y));
	
}


