#include "vetor.h"
int main(){
    int n, *v;
    srand(time(0));
    printf("\nDigite o tamanho do vetor, 0 encerra: \n");
    scanf ("%d", &n);
    while (n > 0)
    {

        v =(int *) malloc (n * sizeof(int));
        
        //BUBBLESORT
        preenche_vetor(v, n);
       // exibe_vetor(v, n, "vetor gerado: ");
        long inicio = time(0);
        bubblesort(v, n);
        long fim = time(0);
        printf("\nn= %d, tempo bubbleSort = %d", n, fim - inicio);
       // exibe_vetor(v, n, "vetor ordenado: ");


        //INSERTIONSORT
        preenche_vetor(v, n);
        //exibe_vetor(v, n, "2o vetor gerado");
        inicio = time(0);
        insertionsort(v, n);
        fim = time(0);
         printf("\nn= %d, tempo insertionSort = %d", n, fim - inicio);
        exibe_vetor(v, n, "vetor ordenado insertionSort: ");
       


        //SELECTIONSORT
        preenche_vetor(v, n);
        exibe_vetor(v, n, "3o vetor gerado");
        inicio = time(0);
        selectionsort(v,n);
        fim = time(0);
        printf("\nn= %d, tempo selectionSort = %d", n, fim - inicio);
        exibe_vetor(v, n, "vetor ordenado selectionSort: ");


        //QUICKSORT
        preenche_vetor(v, n);
        exibe_vetor(v, n, "4o vetor gerado");
        inicio = time(0);
        quicksort(v, 0, n-1);
        
        fim = time(0);
        printf("\nn= %d, tempo do quick = %d", n, fim - inicio);
        exibe_vetor(v, n, "vetor ordenado quickSort: ");

        free(v);
        printf("\n Digite o tamanho do vetor para novo teste, 0 encerra: \n");
        scanf ("%d", &n);     
    }
    return 0;
}