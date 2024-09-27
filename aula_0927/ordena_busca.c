#include "vetor.h"
int main(){
    int n, *v;
    srand(time(0));
    printf("\nDigite o tamanho do vetor, 0 encerra: \n");
    scanf ("%d", &n);
    while (n > 0)
    {
        int cont_quick = 0;
        int cont_busca_simples = 0;
        int cont_busca_binaria = 0;
        v =(int *) malloc (n * sizeof(int));
        preenche_vetor(v, n);
        //exibe_vetor(v, n, "vetor gerado");
        int x;
        printf("\n digite um valor para busca: \n");
        scanf("%d", &x);
        printf("------------------BUSCA SIMPLES-------------------\n");
        //boolean implicito
        if(busca_simples(x,v,n, &cont_busca_simples)){
            printf("pela BUSCA SIMPLES, %d esta na lista \n", x);
        }
        else{
            printf("pela BUSCA SIMPLES, %d nao esta na lista\n", x);
        }
        printf("A busca simples realizou %d comparacoes \n", cont_busca_simples );
        printf("------------------BUSCA BINARIA-------------------\n");
        quicksort(v, 0, n-1, &cont_quick);
        //exibe_vetor(v, n, "vetor ordenado");
        printf("O Quick realizou %d comparacoes \n", cont_quick );
        if (busca_binaria(x, v, n, &cont_busca_binaria)){
            printf("pela BUSCA BINARIA, %d esta na lista\n", x);
        }
        else{
            printf("pela BUSCA BINARIA, %d nao esta na lista\n", x);
        }
        printf("A busca binaria realizou %d comparacoes \n", cont_busca_binaria );
        printf("====================================================\n");
        free(v);
        printf("\nDigite o tamanho do vetor para novo teste, 0 encerra: \n");
        scanf ("%d", &n);   
    }
    return 0;
}
