#include "no.h"
//typedef - dar apelido -  (dentro do struct no) vou dar um apelido -> t_no
// typedef struct no {
//     int info; 
//     struct no * proximo;
// } t_no;

int main (){
    struct no a; // a é uma struct nó
    t_no b; // b é uma struct nó
    t_no * p; //p é um ponteiro para uma struct nó

    a.info = 12;
    b.info = 35;
    printf("Endereco da variavel b: %p\n", &b);
    a.proximo = &b;
    printf("Endereco da variavel a: %p\n", &a);
    p = &a;

    return 0;
}