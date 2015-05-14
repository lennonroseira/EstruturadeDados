================================================================
3­ Considerando o vetor de ponteiros declarado acima como uma variável global.



#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100

struct aluno {
char nome[81];
int mat;
char end[121];
char tel[21];
};
typedef struct aluno Aluno;
typedef struct aluno *PAluno;
PAluno tab[MAX];


/*a. Crie uma função de inicialização que atribui NULL a todos os elementos da tabela, significando que temos, a princípio, uma tabela vazia.*/ 

inicializa()
{
	int i;
	for (i=0; i<MAX; i++)
	tab[i] = NULL;
}

/*b. Crie uma função que armazena os dados de um novo aluno numa posição do vetor. Se a posição da tabela estiver vazia, devemos alocar uma nova estrutura;caso contrário, atualizamos a estrutura já apontada pelo ponteiro.*/


popula (int i)
{
	if (tab[i] == NULL)
	 	tab[i] = (PAluno*)malloc(sizeof(PAluno));
	printf("Digite o nome do aluno: \n");
	scanf(" %s", tab[i]->nome);
	printf("Digite a matricula do aluno: \n");
	scanf("%d", tab[i]->mat);
	printf("Digite o endereco do aluno: \n");
	scanf(" %s", tab[i]->end);
	printf("Digite o telefone do aluno: \n");
	scanf(" %s", tab[i]->tel);
}



inicializa_tab(Paluno tabe[MAX]){
  int i;
  for (i=0;i<MAX;i++) tabe[i]=NULL;

}


popula_tab(Paluno tabe[MAX],int i){
      if (tabe[i]==NULL) tabe[i]=(Paluno)malloc(sizeof(Aluno));    
        printf("Digite o nome do aluno: \n");
	scanf(" %s", tab[i]->nome);
	printf("Digite a matricula do aluno: \n");
	scanf("%d", tab[i]->mat);
	printf("Digite o endereco do aluno: \n");
	scanf(" %s", tab[i]->end);
	printf("Digite o telefone do aluno: \n");
	scanf(" %s", tab[i]->tel);


}


/*c. Crie uma função para remover os dados de um aluno da tabela.
Considere que a posição da tabela a ser liberada será passada para a função.*/

removerAluno(int i)
{
	if(tab[i] != NULL)
	{
		free(tab[i]);
		tab[i] = NULL;
	}	
}

removerAluno_tab(Paluno tabe[MAX],int i){   
      free(tabe[i]);   
      tabe[i]=NULL;    
          
 }


/*d. Crie uma função para consultar os dados. Considere que a posição da tabela será passada.*/

consulta(int i)
{
	if(tab[i] != NULL)
	{
		printf("Nome:  %s\n", tab[i]->nome);
		printf("Matricula:  %d\n", tab[i]->mat);
		printf("Endereco:  %s\n", tab[i]->end);
		printf("Telefone:  %s\n", tab[i]->tel);		
	}
	else
	 printf("Nao existe aluno cadastrado nesta posicao!");
}



consultaAlunos_tab(Paluno tabe[MAX], int i){
               printf("Nome:  %s\n", tab[i]->nome);
	       printf("Matricula:  %d\n", tab[i]->mat);
	       printf("Endereco:  %s\n", tab[i]->end);
	       printf("Telefone:  %s\n", tab[i]->tel);		
	}


/*e. Crie uma função que imprima os dados de todos os alunos da tabela.*/



imprimeAlunos()
{
	int i;
	for(i = 0; i<MAX; i++)
	consulta(i);
}

imprimir_tab(Paluno tabe[MAX]){
    int i;
    for (i=0;i<MAX;i++) consulta_tab(tabe,i);
}


/*f. Faça um programa que utilize as funções da tabela de alunos escritas acima.*/

int main()
{
	Paluno tabe[MAX];
        inicializa_tab(tabe);
	popula_tab (tabe,0);
	consutaAluno_tab(tabe,0);
	inicializa();
        popula(); 
	consulta(0);
	removerAluno(0);
	scanf("%d");
}







