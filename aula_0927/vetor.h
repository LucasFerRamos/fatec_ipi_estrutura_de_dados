#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche_vetor(int *, int );
void exibe_vetor (int *, int, char*);
void soma_vetores(int *, int *, int *, int);
void bubblesort(int*, int);
void insertionsort (int*, int);
void selectionsort (int*, int);
void quicksort(int *, int, int, int *); //vetor v, posições inicial e final

int busca_simples(int, int *, int, int *); // busca um inteiro, num vetor de inteiros, de um tamanho qualquer
int busca_binaria(int, int *, int, int *); // busca um inteiro, num vetor de inteiros, de um tamanho qualquer