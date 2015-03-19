#include <stdio.h>
#include <math.h>
float soma(float a, float b){
	float sum = a + b;
	return sum;
}
float sub(float a, float b){
	float sub = a - b;
	return sub;
}
float mult(float a, float b){
	float mult= a * b;
	return mult;
}
float div(float a, float b){
	float div = a / b;
	return div;
}
float raiz(float a){
	float raiz= sqrt(a);
	return raiz;
}

int main(){
	float x, y;
	int i;
	puts("Menu de opções:\n1. Somar dois números.\n2. Subtrair dois números\n3. Multiplicar dois números\n4. Dividir dois números\n5. Raiz quadrada de um número\nDigite a opcao desejada:");
	scanf("%d", &i);
	switch (i){
	case 1:
		puts("Digite os numeros para realizar a operacao:");
		scanf("%f %f" , &x, &y);
		printf("Soma = %f",soma(x,y));
		break;
	case 2:
		puts("Digite os numeros para realizar a operacao:");
		scanf("%f %f" , &x, &y);
		printf("Subtracao = %f",sub(x,y));
		break;	
	case 3:
		puts("Digite os numeros para realizar a operacao:");
		scanf("%f %f" , &x, &y);
		printf("Soma = %f",mult(x,y));
	case 4:		
		puts("Digite os numeros para realizar a operacao:");
		scanf("%f %f" , &x, &y);
		printf("Soma = %f",div(x,y));
	case 5:
		puts("Digite o numero para realizar a operacao:");
		scanf("%f" , &x);
		printf("Raiz = %f",raiz(x));
	}	
}


