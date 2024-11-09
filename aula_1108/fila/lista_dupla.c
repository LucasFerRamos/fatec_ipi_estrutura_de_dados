#include "lista_dupla.h"

void inicia_lista (t_lista_dupla *l){
    l->primeiro = NULL;
    l->ultimo = NULL;
    l->n_nos = 0;
}
int lista_vazia (t_lista_dupla *l){
    return l->primeiro == NULL;
}

void enfileira (int i, t_lista_dupla *l){ //insere fim
    t_no_duplo * novo = constroi_no(i);
    if(novo != NULL){
        if(lista_vazia(l)){
            l->primeiro = novo;
        } else {
            novo->anterior = l->ultimo;
            l->ultimo->proximo = novo;
        }
        l->ultimo = novo;
        l->n_nos++;
    }

}
void exibe_lista (t_lista_dupla *l, char *msg){
    printf("\n%s\n", msg);
    if(lista_vazia(l)) {
        printf("fila vazia");
    }
    else{
         t_no_duplo * batedor = l ->primeiro;
        // para ser do final para o inicio l->ultimo
        
        do{ 
            printf("%d, ", batedor->info);

            //para ser do final para o inicio batedor->anterior
            batedor = batedor->proximo;
        }while(batedor != NULL);
        //  printf("%d, ", batedor->info);
        // while (batedor != NULL){
        //     printf("%d, ", batedor->info);
        //     batedor = batedor->proximo;
        // }
    }
    printf("\n");
}

int desenfileira (t_lista_dupla *l){ //remove inicio
    int i = l->primeiro->info;//i é o inteiro que vai ser removido e devolvido 
    t_no_duplo * aux = l->primeiro; //aux é o ponteiro que guarda o endereço que vai ser liberado

    if(l->primeiro == l->ultimo){//tem um só
        l->primeiro = NULL;
        l->ultimo = NULL;
        
    }else{ //tem mais de um
        l->primeiro = l->primeiro->proximo;//primeiro passa ser o segundo
        l->primeiro->anterior = NULL; 
    }
    l->n_nos--;
    free(aux);
    return i;
}

void exibe_primeiro(t_lista_dupla *l){
    if(lista_vazia(l)){
        printf("\nFila vazia");
    }else {

        printf("\nPRIMEIRO: %d, ", l->primeiro->info);
    }
}
void exibe_ultimo(t_lista_dupla *l){
    if(lista_vazia(l)){
        printf("\nFila vazia");
    }else {
        printf("\nULTIMO: %d, ", l->ultimo->info);
    
}
}