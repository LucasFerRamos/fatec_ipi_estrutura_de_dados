#include "lista_dupla.h"

void separa_filas(t_lista_dupla *ld, t_lista_dupla *lista_par, t_lista_dupla *lista_impar){
do{
    int i = desenfileira(ld);
if(i % 2){
    enfileira(i, lista_impar);
    
}else{
    enfileira(i, lista_par);
    
}

}while(!(lista_vazia(ld)));

}


int main () {
    t_lista_dupla ld, lista_par, lista_impar;
    inicia_lista(&ld);
    inicia_lista(&lista_impar);
    inicia_lista(&lista_par);
    for (int i=1; i<=10; i++) enfileira(i, &ld);
    exibe_lista(&ld,"Fila pronta");
    separa_filas(&ld, &lista_par, &lista_impar);
    exibe_lista(&lista_par, "Fila de PARES");
    exibe_lista(&lista_impar, "Fila de Impares");






}