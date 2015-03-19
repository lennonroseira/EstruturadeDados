#include<stdio.h> 

int main() {
	int dia,dia2,mes,mes2,ano,ano2;
	puts ("Digite a primeira data no formato DD/MM/AAAA:");
	scanf("%d / %d / %d",&dia,&mes,&ano);
	puts ("Digite a segunda data no formato DD/MM/AAAA:");
 	scanf("%d / %d / %d",&dia2,&mes2,&ano2);
 	if (ano>ano2){
 		printf("A maior data eh: %d/%d/%d",dia,mes,ano);
 	}else if(ano<ano2){
 		printf("A maior data eh: %d/%d/%d",dia2,mes2,ano2);
 	
 	}else if(mes>mes2){
 		printf("A maior data eh: %d/%d/%d",dia,mes,ano);
 	}else if(mes<mes2){
 		 printf("A maior data eh: %d/%d/%d",dia2,mes2,ano2);
 
 	}else if(dia>dia2){
 		printf("A maior data eh: %d/%d/%d",dia,mes,ano);
 	}else if (dia<dia2){
 		printf("A maior data eh: %d/%d/%d",dia2,mes2,ano2);
 	}
}

