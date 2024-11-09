#include "no.h"

typedef struct lista {
    t_no * primeiro;
} t_lista;

void inicia_lista (t_lista *);
int lista_vazia (t_lista *);

//insere inicio
void push(int, t_lista *);
int exibe_lista (t_lista *, char *);

//remove inicio
int pop (t_lista *);

int tamanho_lista(t_lista *);
int somar_lista(t_lista *);
int maior_lista(t_lista *);
int menorpar_lista(t_lista *);
