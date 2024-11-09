#include <time.h>
#include  "lista_dupla.h"
int main () {
    t_lista_dupla l;
    inicia_lista(&l);
    srand(time(0));
    do {
        if(rand() % 2 == 0 ) { //par: insere
            if (rand() % 2 == 0) //INSERE INICIO
            {
                printf("insercao do inicio\n");
                insere_inicio(rand() % 10, &l);
            }
            else{ //INSERE FIM
                printf("insercao do fim\n");

                insere_fim(rand() % 10, &l);
            }
            
        }else if (!lista_vazia(&l)) { //impar: remove
        
            if(rand() % 2 == 0){ //REMOVE INICIO
                printf("%d saiu do inicio \n", remove_inicio(&l));

            }else{ //REMOVE FIM
                printf("%d saiu do fim \n", remove_fim(&l));
            }
        }
        exibe_lista(&l, "");

    }while (!lista_vazia(&l));
}