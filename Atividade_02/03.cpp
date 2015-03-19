#include <stdio.h>
float maiorque(float a, float b){
	if (a>b)
		return a;
	return b;
	
}

int main()
{	
	float x,y;
	puts("Digite dois numeros para comparar!");
	scanf("%f %f", &x,&y);
	printf("\n%.3f eh o maior numero!", maiorque(x,y));

}



