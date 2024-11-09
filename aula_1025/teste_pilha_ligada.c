#include "lista.h"

int menu(){
    int op;
    printf("Escolha uma opcao:\n");
    printf("1 - Empilhar\n 2 - Desempilhar\n 3 - Mostrar a Pilha\n 0 - sair\n");
    printf("->");
    scanf("%d", &op);
    return op; 
}

int main(){
    int op;
    t_lista l;
    inicia_lista(&l);
    do {
        op = menu();
        switch (op) {
            case 1:
                printf("Digite o valor para empilhar\n");
                int a;
                scanf("%d", &a);
                push(a, &l);

                break;
            case 2:
                printf("%d foi desempilhado\n", pop(&l));
                break;
            case 3:
                exibe_lista(&l,"pilha:");
                break;
            case 0:
                printf("Obrigado volte sempre\n");
                break;
            default:
                printf("Opcao invalida, tente novamente!\n");
                break;
        }
        printf("------------------------------------------------\n");
    } while(op != 0);


    return 0;
}
