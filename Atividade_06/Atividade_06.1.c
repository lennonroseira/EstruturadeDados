
//1-Revisando estruturas em C:



#include <stdio.h>
#include <stdlib.h>


/*a. Declare uma vari�vel do tipo ponto.*/

struct ponto{
      float x;
      float y;       
       };
typedef struct ponto Ponto;

/*d. Crie um ponteiro para estrutura.*/

Ponto* cria(){
    Ponto* f=(Ponto*)malloc(sizeof(Ponto));  
    return f;
       }


/*b.Use scanf para solicitar valores para a coordenada x e y da vari�vel que criou e imprima na tela.

c. Separando o c�digo, crie duas fun��es. Uma para capturar os valores de (x,y) e outra para imprimir. */

captura_A(Ponto p){
  float i;
  scanf("%f",&i);
  p.x=i;
  scanf("%f",&i);
  p.y=i;                          
                }

imprimi_A(Ponto p){
  printf("%f\n",p.x);
  printf("%f\n",p.y);              

}

/* f. Crie duas fun��es. Uma para capturar os valores de (x,y) e outra para imprimir.(obs: Passe a estrutura por refer�ncia). */



captura_B(Ponto* f){
  float i;
  scanf("%f",&i);

/* e. Fa�a o ponteiro apontar para estrutura declarada em a. */ 
 f->x=i;
  scanf("%f",&i);
  f->y=i;                          
                }      
				          
imprimi_B(Ponto* f){
  printf("%f\n",f->x);
  printf("%f\n",f->y);                 
}




/*h. Crie uma fun��o para determinar a dist�ncia entre dois pontos.*/

float calculo_distancia(Ponto* f,Ponto* q){
      float d;
      d=(f->x-q->x)*(f->x-q->x)+(f->y-q->y)*(f->y-q->y);
      d=sqrt(d);
      return d;
      }

main(){
   
  Ponto w;
  Ponto z;
  Ponto *f=&w;
  Ponto *q=&z;
  captura_A(w);
  imprimi_A(w);  
  captura_B(f);
  imprimi_B(f);
  captura_B(z);
  imprimi_B(z);
  printf("%f",distancia(f,z));

    
       }

/*G--> Quando passamos a estrutura por refer�ncia como na letra F, estamos apenas apontando para um endere�o de mem�ria, n�o fazemos copia. J� quando passamos a estrutura por valor, ocorre uma c�pia dos dados na mem�ria, ocupando assim mais espa�o.*/


