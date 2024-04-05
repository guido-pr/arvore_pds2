#include <stdlib.h>
#include <stdio.h>
#include "arvore.h"

typedef struct No{
    int valor;
    struct No* esquerda;
    struct No* direita;
}No;

typedef struct Arvore{
    No* raiz;
}Arvore;

Arvore* arvore_cria(){
    Arvore* arvore = malloc(sizeof(Arvore));
    arvore->raiz->direita = NULL;
    arvore->raiz->esquerda = NULL;
    return arvore;
}

void arvore_push(Arvore* arvore, int x){
    if(x > arvore->raiz->valor){
        if(arvore->raiz->direita == NULL){
            No* novo_no = malloc(sizeof(novo_no));
            novo_no->valor = x;
            novo_no->direita = NULL;
            novo_no->esquerda = NULL;
            arvore->raiz->direita = novo_no;
        }
    }
    if(arvore->raiz->direita != NULL){
        arvore_push(arvore, x);
    }
 
    if(x < arvore->raiz->valor){
        if(arvore->raiz->esquerda == NULL){
            No* novo_no = malloc(sizeof(novo_no));
            novo_no->valor = x;
            novo_no->esquerda = NULL;
            novo_no->direita = NULL;
            arvore->raiz->esquerda = novo_no;
        }
    }
    if(arvore->raiz->esquerda != NULL){
        arvore_push(arvore, x);
    }


}