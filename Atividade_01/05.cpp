

#include <stdio.h>
int soma(int a, int b){
	int sum;
	sum = a + b;
	return sum;
}

int main(){
	int x, y;
	puts("Digite dois numeros");
	scanf("%d %d",&x,&y);
	printf("Soma = %d",soma (x,y));
	
}


