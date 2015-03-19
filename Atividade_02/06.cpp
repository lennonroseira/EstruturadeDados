

#include <stdio.h>

int main(){
	int x;
	puts("Digite um numero:");
	scanf("%d", &x);
	int resto = x % 2; 
	  
	  if (resto == 0){
		puts("\nEh par!");
	} else {
		puts("\nEh impar!");
	};	
}


