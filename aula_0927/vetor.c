 
#include "vetor.h"

void preenche_vetor(int *v, int t){
    for (int i =0; i<t; i++)
        v[i] = rand() % (t*10);
     
}

void exibe_vetor(int *v, int t, char *msg) {
    printf("\n%s\n", msg);
    for (int i =0; i<t; i++){
        printf (" %d ", v[i]);
    }
    printf("\n");    
}

void soma_vetores(int *v1, int *v2, int *vs, int t){
    
    for (int i =0; i<t; i++){
        vs[i] = v1[i] + v2[i];
    }

}

void bubblesort(int*v , int n){
 for(int i=1; i < n; i++){
    for(int j=0; j < n - i; j++){
        if (v[j] > v[j+1]){
            int aux = v[j];
            v[j] = v[j+1];
            v[j+1] =aux;
        }
    }

 }
}

void insertionsort (int*v, int n){
    int i, j;
    for( i=1; i<n; i++){
        int x = v[i];
        for( j=i-1; j>= 0 && v[j]>x;j--){
            v[j+1] = v[j];


        }
        v[j+1] = x;


    }

}

void selectionsort(int*v, int n){
    //loop percorre cada elemento do vetor, menos o ultimo
    // o i representa a posição atual onde o menor elemento será colocado 
    for(int i = 0; i < n-1; i++){
        int min = i;

        //percorre os elementos restantes do vetor 
        //encontrar o menor elemento no vetor não ordenado
        for(int j = i+1; j < n; j++){

            //se o elemento v[j] for menor que v[min]
            if(v[j] < v[min]){
                //então min será atualizado para j
                min = j;
            }     
        }
        // Troca o menor elemento encontrado com o elemento na posição i
        int x = v[i]; 
        v[i] = v[min]; 
        v[min] = x;

    }
}
int partition(int *a, int p, int r, int *cont){
    int x = a[r]; 
    int i = p-1;
    int j;
    for(j=p; j<r; j++){
        (*cont)++;
        if(a[j]<= x){
            i++;
            int aux = a[i];
            a[i] = a[j];
            a[j] = aux;
        }
    }
    i++;
    int aux = a[j];
    a[j] = a[i];
    a[i] = aux;
    return i;
    
}
void quicksort(int *a, int p, int r, int *cont){
    
    if(p < r){
        int q = partition (a, p, r, cont);
        quicksort(a, p, q-1, cont);
        quicksort(a, q+1, r, cont);
    }
}

int busca_simples(int x, int *v, int n, int *cont){
    for(int i=0; i<n; i++){
        (*cont)++;
        if(x == v[i]){
            return 1;
        }
    }

    return 0;
}

int busca_binaria(int x, int *v, int n, int * cont){
    int ini = 0, fim = n-1;
    while (ini <= fim) {
        int meio = (ini + fim) / 2;
        (*cont)++;
        if (x == v[meio]) return 1;
        (*cont)++;
        if (x > v[meio]) ini = ini = meio + 1;
        else fim = meio - 1;
    }
    return 0;
}
