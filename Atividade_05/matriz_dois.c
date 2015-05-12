#include <stdlib.h> /* malloc, free, exit */
#include <stdio.h> /* printf */
#include "interface.h"
struct matriz {
int lin;
int col;
int** v;
};
Matriz* cria (int m, int n) {
int i;
Matriz* mat = (Matriz*) malloc(sizeof(Matriz));
if (mat == NULL) {
printf("Memória insuficiente!\n");
exit(1);
}
mat->lin = m;
mat->col = n;
mat->v = (int**) malloc(m*sizeof(int*));
for (i=0; i<m; i++)
mat->v[i] = (int*) malloc(n*sizeof(int));
return mat;
}
void libera (Matriz* mat) {
int i;
for (i=0; i<mat->lin; i++)
free(mat->v[i]);
free(mat->v);
free(mat);
}
int acessa (Matriz* mat, int i, int j) {
if (i<0 || i>=mat->lin || j<0 || j>=mat->col) {
printf("Acesso inválido!\n");
exit(1);
}
return mat->v[i][j];
}
void atribui (Matriz* mat, int i, int j, int v) {
if (i<0 || i>=mat->lin || j<0 || j>=mat->col) {
printf("Atribuição inválida!\n");
exit(1);
}
mat->v[i][j] = v;
}
int linhas (Matriz* mat) {
return mat->lin;
}
int colunas (Matriz* mat) {
return mat->col;
}

 void simetrica(Matriz* mat){
        int ctrlin, ctrcol;
        int simetria;
        if (mat->lin!=mat->col){ 
			simetria=1;
            printf("Matriz nao simetrica\n");}               
        else{
        	simetria=0;
            printf("Matriz Quadrada");
              for (ctrlin=0; (ctrlin<mat->lin)&&(simetria==0); ctrlin++) {
               for (ctrcol=0; (ctrcol<mat->col)&&(simetria==0); ctrcol++) {
                   if (mat->v[ctrlin][ctrcol]!=mat->v[ctrcol][ctrlin]) 
				   			simetria=1;
                   
               }
              }
        if (simetria==0)
			printf(" e simetrica");	
		if (simetria==1)
			printf(", mas assimetrica");	
        }                                
                           
}
void transposta(Matriz* mat){
	 int i,j,k;
      int transposta[mat->col][mat->lin];
      for (j = 0; j < mat->lin;j++){
         for (i = 0; i < mat->col; i++){
             k=mat->v[i][j];
             transposta[j][i] = k;                           
            }
    }
}

main(){
	Matriz* mtr;
	mtr= cria(4,4);
	atribui(mtr,0,0,1);
	atribui(mtr,2,2,3);
	atribui(mtr,1,2,4);
	atribui(mtr,1,1,1);
	printf("%d",acessa(mtr,0,0));
	printf("\n%d",acessa(mtr,2,2));
	printf("\n%d",acessa(mtr,1,2));
	printf("\n%d",acessa(mtr,1,1));
	printf("\n O numero de colunas e: %d\n",colunas(mtr));
	simetrica(mtr);
	transposta(mtr);
	libera(mtr);
}

 
