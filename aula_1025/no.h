#include <stdio.h>
#include <stdlib.h>


//typedef - isso aqui tudo vou dar um apelido -> t_no
typedef struct no {
    int info; 
    struct no * proximo;
} t_no;

t_no * constroi_no (int);



