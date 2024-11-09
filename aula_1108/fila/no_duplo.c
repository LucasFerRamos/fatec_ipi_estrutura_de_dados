#include "no_duplo.h"

t_no_duplo * constroi_no (int i){
    //apont_no vai receber valor do malloc
    t_no_duplo * apont_no = (t_no_duplo *) malloc (sizeof(t_no_duplo));
    if(apont_no != NULL){
        apont_no->info =i;

        //na linguagem c  é possivel utilizar = duas vezes
        apont_no->anterior = apont_no->proximo = NULL;

    }
    return apont_no;
}