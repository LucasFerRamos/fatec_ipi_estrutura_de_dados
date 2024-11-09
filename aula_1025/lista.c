#include "lista.h"

void inicia_lista (t_lista *l){
    l->primeiro = NULL;
}
int lista_vazia (t_lista *l){
return(l->primeiro == NULL);
}
void push(int i, t_lista *l){
    t_no * novo = constroi_no(i);
    if (novo != NULL){
        if(!lista_vazia(l)){
            novo->proximo = l->primeiro;
        }
        l->primeiro = novo;
    }

}
int exibe_lista (t_lista *l, char * msg){
    t_no * aux;
    printf("------------------------------------------------\n");
    printf("\n%s\n", msg);
    if(lista_vazia(l)) {
        printf("lista vazia");
    }
    else{
        aux = l ->primeiro;
        while(aux != NULL){ //vai ate o final
            printf("%d\n", aux->info);
            aux = aux->proximo;
        }
        
    }
    printf("\n");
}



int pop (t_lista *l){
    if(!lista_vazia(l)){ //a prof nao colocou esse if
        int i = l->primeiro->info; // i recebe uma cópia da informação armazenada no primeiro nó
        t_no * aux = l->primeiro; // aux recebe uma cópia do endereço do primeiro nó;
        l->primeiro = l->primeiro->proximo;
        free(aux);
        return i;    
    }else{
        printf("Pilha está vazia\n");
    }
}

int tamanho_lista(t_lista *l){
    int cont=0;
    if(!lista_vazia(l)){
        t_no * aux = l->primeiro;
        while(aux != NULL){
            cont++;
            aux = aux->proximo;
        }
    }
    return cont;
}









// 2. somar os valores da lista
// (devolve o resultado, NAO IMPRIME)
int somar_lista(t_lista *l){
    int soma=0;
    if(!lista_vazia(l)){
        t_no * aux = l->primeiro;
        while(aux != NULL){
            soma += aux->info;
            aux = aux->proximo;
            
        }
    }
    return soma;
}
// 3. encontrar o maior da lista
// (devolve o resultado, NAO IMPRIME)

int maior_lista (t_lista *l){
    int maior = 0;
    t_no * aux;
    if(!lista_vazia(l)) {
        aux = l ->primeiro;
        while(aux != NULL){
            if(aux->info > maior){
                maior = aux->info;    
            }
            aux = aux->proximo;
        }   
    }
    return maior;
}
// 4.encontrar o menor par da lista
// (devolve o resultado, NAO IMPRIME)

int menorpar_lista(t_lista *l){
    int menorpar = 10;
    t_no * aux;
    if(!lista_vazia(l)) {
        aux = l ->primeiro;
        while(aux != NULL){
            if( aux->info < menorpar  && (aux->info % 2) == 0 ){
                menorpar = aux->info;    
            }
            aux = aux->proximo;
        }   
    }
    return menorpar;
}