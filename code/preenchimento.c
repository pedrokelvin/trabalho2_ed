#include "preenchimento.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Tentando criar agora o meu código

void insere(Tree *nodo, Tree*nodo2){

    if(nodo->left == NULL && nodo->right == NULL)
        return;

    /*
    if(strcmp(nodo->info->carac,"cabelos") == 0 || strcmp(nodo->info->carac,"olhos") == 0)
        Nodo* no = nodo;
    */

    if(strcmp(nodo->left->info->carac,"VAZIO") == 0 && strcmp(nodo->right->info->carac,"VAZIO") == 0)
    {
        Genetica *genetic1, *genetic2;

        if(strcmp(nodo->info->carac,"formato") == 0)
        {
            genetic1 = cria_tipo_olhos();
            genetic2 = cria_tipo_olhos();
            nodo->left->info = genetic1;
            nodo->right->info = genetic2;
        }
        else if(strcmp(nodo->info->carac,"cor") == 0)
        {
            if(strcmp(nodo2->info->carac,"cabelos") == 0)
            {
                genetic1 = cria_cor_cabelos();
                genetic2 = cria_cor_cabelos();
                nodo->left->info = genetic1;
                nodo->right->info = genetic2;
            }
            else if(strcmp(nodo2->info->carac,"olhos") == 0)
            {
                genetic1 = cria_cor_olhos();
                genetic2 = cria_cor_olhos();
                nodo->left->info = genetic1;
                nodo->right->info = genetic2;
            }
        }
        else if(strcmp(nodo->info->carac,"camisa") == 0)
        {
            genetic1 = cria_camisa_tronco();
            genetic2 = cria_camisa_tronco();
            nodo->left->info = genetic1;
            nodo->right->info = genetic2;
        }
        else if(strcmp(nodo->info->carac,"tipo") == 0)
        {
            genetic1 = cria_tipo_cabelos();
            genetic2 = cria_tipo_cabelos();
            nodo->left->info = genetic1;
            nodo->right->info = genetic2;
        }
        else if(strcmp(nodo->info->carac,"calcas") == 0)
        {
            genetic1 = cria_calca_membros();
            genetic2 = cria_calca_membros();
            nodo->left->info = genetic1;
            nodo->right->info = genetic2;
        }
        else if(strcmp(nodo->info->carac,"botas") == 0)
        {
            genetic1 = cria_botas_membros();
            genetic2 = cria_botas_membros();
            nodo->left->info = genetic1;
            nodo->right->info = genetic2;
        }
        else if(strcmp(nodo->info->carac,"raca") == 0)
        {
            genetic1 = cria_raca_tronco();
            genetic2 = cria_raca_tronco();
            nodo->left->info = genetic1;
            nodo->right->info = genetic2;
        }
    }
    else
    {
        insere(nodo->left,nodo);
        insere(nodo->right,nodo);
    }


}
