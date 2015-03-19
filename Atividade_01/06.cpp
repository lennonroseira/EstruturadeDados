

#include <stdio.h>
float media(float a, float b, float c, float d){
	float med;
	med = (a + b + c + d)/4;
	return med;
}

int main(){
	float x, y,z,w;
	puts("Digite suas quatro notas bimestrais:");
	scanf("%f %f %f %f",&x,&y,&z,&w);
	printf("Media = %f",media (x,y,z,w));
	
}


