#include <stdlib.h> 
#include <stdio.h>

struct lista {
	int info;
	struct lista* prox;
};
	typedef struct lista Lista;

struct lista2 {
	int info;
	struct lista2* ant;
	struct lista2* prox;
};
	typedef struct Lista2 Lista2;

Lista* inicializa (void){
	return NULL;
}

Lista* insere (Lista* l, int i){
	
	Lista* newlist = (Lista*) malloc(sizeof(Lista));
	newlist->info = i;
	newlist->prox = l;
	return newlist;
}

int percorre (Lista* l){
	Lista* p; /* variável auxiliar para percorrer a lista */
	for (p = l; p != NULL; p = p->prox)
		printf("info = %d\n", p->info);
}

int vazia (Lista* l){
	if (l == NULL)
		return 1;
	return 0;
}

Lista* busca (Lista* l, int v){
	Lista* p;
	for (p=l; p!=NULL; p=p->prox)
		if (p->info == v){
			printf("Elemento %d encontrado",v);
			return p;
		}
		else{ /* não achou o elemento */
			printf("Elemento %d nao encontrado",v);
			return NULL;
		}
}

Lista* retira (Lista* l, int v) {
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	Lista* p = l; /* ponteiro para percorrer a lista*/
	
	while (p != NULL && p->info != v) {
		ant = p;
		p = p->prox;
	}

	if (p == NULL)
	return l;

	if (ant == NULL) {
	l = p->prox;
	}
	
	else {
	ant->prox = p->prox;
	}
	
	free(p);
	return l;
}

void libera (Lista* l){
	Lista* p = l;
	while (p != NULL) {
		Lista* t = p->prox; /* guarda referência para o próximo elemento*/
		free(p); /* libera a memória apontada por p */
		p = t; /* faz p apontar para o próximo */
	}
}

int igual (Lista*l1, Lista* l2){
	Lista* p;
	Lista* q;
	for (p=l1, q=l2; p!=NULL && q!=NULL; p=p->prox, q=q->prox )
		if (p->info != q->info){
			printf("Listas diferentes");
			return 0;
		}
		else{
			printf("Listas iguais");
			return 1;
		}
}

Lista2* insere (Lista2* l, int v){
	Lista2* novo = (Lista2*) malloc(sizeof(Lista));
	novo->info = v;
	novo->prox = l;
	novo->ant = NULL;
		if (l != NULL)
			l->ant = novo;
		return novo;
}

Lista2* busca (Lista2* l, int v){
	Lista2* p;
	for (p=l; p!=NULL; p=p->prox)
		if (p->info == v)
			return p;
	return NULL; /* não achou o elemento */
}

Lista2* retira (Lista2* l, int v) {
	Lista2* p = busca(l,v);
		if (p == NULL)
			return l;
		if (l == p)
			l = p->prox;
		else
			p->ant->prox = p->prox;
		if (p->prox != NULL)
			p->prox->ant = p->ant;
		free(p);
		return l;
}
/*questão 7
	A função não funciona corretamente, pois a mesma está retornando uma estrutura e não o valor da mesma.*/
	
/*questão 8
A função verifica se o ultimo nodo é NULL, se for ele encerra, caso seja diferente de NULL, ele iguala os ultimos elemestos a NULL. 
*/

int main (void){
	
Lista* copia(Lista* l){
	Lista* copy;
	copy = inicializa();
	Lista* p;
	for (p = l; p != NULL; p = p->prox)
		copy = insere(copy,p->info);
	return copy;
}	
	Lista* list;
	Lista2* list2 /* declara uma lista não inicializada */
	list = inicializa(); /* inicializa lista como vazia */
	list = insere(list, 10); /* insere na lista o elemento 23 */
	list = insere(list, 15); /* insere na lista o elemento 45 */
	list = insere(list, 20);
	list = percorre (list);
	list = busca(list,15);
	list = retira(list,20);
	list2= copia(list);
	return 0;
}
