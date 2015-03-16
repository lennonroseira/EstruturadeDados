#include <stdio.h>
int maiorque(int a, int b){
	if (a>b)
		return a;
	return b;
	
}
void teste (){
	int maior = maiorque(20, 10);
			if(maior == 20)
			puts("\nFuncao correta!");
		}
	


int main()
{	teste();
	puts ("\nExemplo para lista de valores (10,40,30,5):");
	int maior,i;
	int num[]={10,40,30,5};
	for (i = 0; i<4; i++){
		int maior = maiorque(maior,num[i]);
			if(i==3){
			printf("\n%d eh o maior numero!",maior);
		}

	
 }
	
	
}

