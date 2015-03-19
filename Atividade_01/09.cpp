

#include <stdio.h>
float dbarea(float a){
	float area = a * a *2 ;
	return area;
}

int main(){
	float x;
	puts("Digite o valor do lado do quadrado");
	scanf("%f",&x);
	printf("O dobro da area e  %f", dbarea(x));
	
}


