#include "no_duplo.h"

typedef struct {
    t_no_duplo * primeiro;
    t_no_duplo * ultimo;
    int n_nos;

} t_lista_dupla;


void inicia_lista (t_lista_dupla *);
int lista_vazia (t_lista_dupla *);
void insere_inicio (int, t_lista_dupla *);
void insere_fim (int, t_lista_dupla *);
void exibe_lista (t_lista_dupla *, char *);

int remove_inicio (t_lista_dupla *);

int remove_fim (t_lista_dupla *);
