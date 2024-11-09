#include <time.h>
#include "lista_dupla.h"


int main () {
    t_lista_dupla ld;
    inicia_lista(&ld);
    srand(time(0));
    do {
        if(rand() % 2) {
            printf("\nenfileirar\n");
            enfileira(rand() % 10, &ld);
            exibe_lista(&ld, "chegou mais um");
            exibe_primeiro(&ld);
            exibe_ultimo(&ld);  
        }
        else {

            if (!lista_vazia(&ld)){ 
            desenfileira(&ld);
            exibe_lista(&ld, "primeiro foi atendido");
            } 
            else {
                printf("Nao chegou ninguem");
            }
            exibe_primeiro(&ld);
            exibe_ultimo(&ld);
        }
        // sleep(1000);
    }while(!lista_vazia(&ld));
    return 0; 
}