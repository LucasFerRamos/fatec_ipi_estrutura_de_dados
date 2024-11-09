#include <time.h>
#include "lista_dupla.h"
int main () {
    t_lista_dupla l;
    inicia_lista(&l);
    srand(time(0));
    
    // Teste de inserção inicial
    printf("Inserindo no inicio\n");
    insere_inicio(rand() % 10, &l);
    exibe_lista(&l, "Depois de inserir no inicio:");

    // Verificando estado da lista
    printf("Primeiro nó: %p\n", l.primeiro);
    printf("Último nó: %p\n", l.ultimo);

    printf("Inserindo no fim\n");
    insere_fim(rand() % 10, &l);
    exibe_lista(&l, "Depois de inserir no fim:");

    // Verificando estado da lista
    printf("Primeiro nó: %p\n", l.primeiro);
    printf("Último nó: %p\n", l.ultimo);
    
    // Teste de remoção
    if (!lista_vazia(&l)) {
        printf("Removendo do inicio: %d\n", remove_inicio(&l));
        exibe_lista(&l, "Depois de remover do inicio:");
    }
    
    if (!lista_vazia(&l)) {
        printf("Removendo do fim: %d\n", remove_fim(&l));
        exibe_lista(&l, "Depois de remover do fim:");
    }

    return 0;
}
