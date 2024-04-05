#ifndef _ARVORE_H
#define _ARVORE_H

#include <stdlib.h>
#include <stdio.h>

typedef struct Arvore Arvore;

Arvore* arvore_cria();

void arvore_push(Arvore* a, int x);

#endif
