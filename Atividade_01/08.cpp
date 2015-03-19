

#include <stdio.h>
float raio(float a){
	float area;
	float pi= 3.141592;
	area = a * a * pi;
	return area;
}

int main(){
	float x;
	puts("Digite o valor do raio");
	scanf("%f",&x);
	printf("Area do circulo = %f", raio(x));
	
}


