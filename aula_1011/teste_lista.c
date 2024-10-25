#include "lista.h"

int main () {
    t_lista l;
    inicia_lista(&l);
    exibe_lista(&l, "lista depois de INICIALIZADA");
    insere_inicio(1, &l);
    insere_inicio(2, &l);
    insere_inicio(3, &l);
    
    
    exibe_lista(&l, "lista depois das INSERCOES de inicio");
    insere_fim(4, &l);
    insere_fim(5, &l);
    insere_fim(6, &l);
    exibe_lista(&l, "lista depois das INSERCOES de fim");
    
    int primeiro_elemento = remove_inicio(&l);
    printf("\n%d saiu do inicio", primeiro_elemento);
    exibe_lista(&l,"lista depois das REMOCAO de inicio");
    int ultimo_elemento = remove_fim(&l);
    printf("\n%d saiu do fim da lista", ultimo_elemento);
    exibe_lista(&l,"lista depois das REMOCAO de fim");
    
    printf("\n%d maior da lista", maior_lista(&l));
    return 0;
}