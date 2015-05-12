#include <stdlib.h> /* malloc, free, exit */
#include <stdio.h> /* printf */
#include "interface.h"
struct matriz {
int lin;
int col;
int* v;
};
Matriz* cria (int m, int n) {
Matriz* mat = (Matriz*) malloc(sizeof(Matriz));
if (mat == NULL) {
printf("Memória insuficiente!\n");
exit(1);
}
mat->lin = m;
mat->col = n;
mat->v = (int*) malloc(m*n*sizeof(int));
return mat;
}

void libera (Matriz* mat){
free(mat->v);
free(mat);
}

int acessa (Matriz* mat, int i, int j) {
int k; /* índice do elemento no vetor */
if (i<0 || i>=mat->lin || j<0 || j>=mat->col) {
printf("Acesso inválido!\n");
exit(1);
}
k = i*mat->col + j;
return mat->v[k];
}

void atribui (Matriz* mat, int i, int j, int v) {
int k; /* índice do elemento no vetor */
if (i<0 || i>=mat->lin || j<0 || j>=mat->col) {
printf("Atribuição inválida!\n");
exit(1);
}
k = i*mat->col + j;
mat->v[k] = v;
}

int linhas (Matriz* mat) {
return mat->lin;
}

int colunas (Matriz* mat) {
return mat->col;
}

void simetrica(Matriz* mat){
	int ctrlin,ctrcol,i,j;
	int simetria;
	if (mat->lin !=mat->col){
		simetria=1;
		printf("Matriz assimetrica\n");
	}else{
		simetria=0;
		printf("\nMatriz quadrada");
	
	//elemento mat[i][j] =i*numero de col + posiçao na linha(col);//
	for (ctrlin=0, (ctrlin < mat->lin) && (simetria==0); ctrlin++;) {
		for (ctrcol=0, (ctrcol < mat->col) && (simetria==0); ctrcol++;){
			i= ctrlin * mat->col + ctrcol;
			j= ctrcol * mat->col + ctrlin;
			if (mat->v[i] != mat->v[j])
				simetria=1;

	}
	
	}
	if (simetria==0)
			printf(" e simetrica");	
	if (simetria==1)
			printf(" mas assimetrica");	
}
}

void transposta(Matriz* mat){
	 int i,j,k;
      int transposta[mat->col][mat->lin];
      for (j = 0; j < mat->lin;j++){
         for (i = 0; i < mat->col; i++){
             k=i*mat->col+j;
             transposta[j][i] = mat-> v[k];                           
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
	printf("\n O numero de colunas e: %d",colunas(mtr));
	simetrica(mtr);
	transposta(mtr);
	libera(mtr);
		
	

}
