

#include <stdio.h>
float area(float b, float h){
	float triangulo = b * h/2;
	return triangulo;
}

int main(){
	float x,y;
	puts("Digite a base do triangulo e a altura!");
	scanf("%f %f" , &x, &y);
	printf("A area do triangulo e %.3f u.a ", area(x,y));
	
}


