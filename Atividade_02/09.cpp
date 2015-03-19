#include <stdio.h>
#include <time.h>
int main(void)
{
struct tm *local;
time_t t;
t= time(NULL);
local=localtime(&t);
char month[]= "";
int dia=local->tm_mday;
int mes=local->tm_mon+1;
int ano=local->tm_year+1900;
if (mes == 1){
	char month[]= "Janeiro";
	printf("Dia %d de %s de %d",dia,month,ano); // Retorna a data
} else if (mes ==2){
	char month[]= "Fevereiro";
	printf("Dia %d de %s de %d",dia,month,ano); // Retorna a data
}else if (mes ==3){
	char month[]= "Marco";
	printf("Dia %d de %s de %d",dia,month,ano); // Retorna a data
}else if (mes ==4){
	char month[]= "Abril";
	printf("Dia %d de %s de %d",dia,month,ano); // Retorna a data
}else if (mes ==5){
	char month[]= "Maio";
	printf("Dia %d de %s de %d",dia,month,ano); // Retorna a data
}else if (mes ==6){
	char month[]= "Junho";
	printf("Dia %d de %s de %d",dia,month,ano); // Retorna a data
}else if (mes ==7){
	char month[]= "Julho";
	printf("Dia %d de %s de %d",dia,month,ano); // Retorna a data
}else if (mes ==8){
	char month[]= "Agosto";
	printf("Dia %d de %s de %d",dia,month,ano); // Retorna a data
}else if (mes ==9){
	char month[]= "Setembro";
	printf("Dia %d de %s de %d",dia,month,ano); // Retorna a data
}else if (mes ==10){
	char month[]= "Outubro";
	printf("Dia %d de %s de %d",dia,month,ano); // Retorna a data
}else if (mes ==11){
	char month[]= "Novembro";
	printf("Dia %d de %s de %d",dia,month,ano); // Retorna a data
}else if (mes ==11){
	char month[]= "Dezembro";
	printf("Dia %d de %s de %d",dia,month,ano); // Retorna a data
};
printf(" Hora:%s",__TIME__);
}

