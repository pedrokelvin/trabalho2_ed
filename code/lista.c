Lista* cria_lista(){

    Lista *l;

    l = (Lista *) malloc(sizeof(Lista));
    l->cabeca = (Nodo *) malloc(sizeof(Nodo));
    l->cabeca->Tree = (Tree *) malloc(sizeof(Tree));
    l->cabeca->prox = NULL;
    l->cabeca->ant = NULL;

    return l;
}

int vazia_lista(Lista* cabeca){

    return(cabeca->cabeca == NULL);

}

/*comentário*/

// TESTES

void insere_lista(Lista* l, int posicao, Tree* personagem){

    if(vazia_lista(l))
        return;

    Nodo* insere = (Nodo*) malloc(sizeof(Nodo));
    insere->personagem = personagem;
    insere->ant=NULL;
    insere->prox=NULL;
    Nodo* atual = l->cabeca;
    int i=0;

    for(i=0;i<posicao;i++){
        if(atual==NULL){
            return;
        }
        else{
            atual=atual->proximo;
        }
    }

    if(atual->ant=NULL){
        insere->prox=atual;
        atual->ant=insere;
    }
    else{
        insere->prox=atual;
        insere->ant=atual->ant;
        atual->ant->prox=insere;
        atual->ant=insere;
    }

}
void remove_lista(Lista *l, int posicao){

    Nodo *l2 = l->cabeca;

    if(vazia_lista(l2))
        return;

    for(int i=0; i < posicao; ++i)
    {
        if(l2 == NULL)
            return;
        l2 = l2->prox;
    }

    if(l2->prox == NULL && l2->ant == NULL)
        l->cabeca = NULL;
    else if(l2->prox == NULL)
        l2->ant->prox = NULL;
    else if(l2->ant == NULL)
    {
        l2->prox->ant = NULL;
        l->cabeca = l2->prox;
    }
    else
    {
        l2->ant->prox = l2->prox;
        l2->prox->ant = l2->ant;
    }
    free(l2);
    l2 = NULL;
}


void free_lista(Lista *l){

    Nodo *aux = l->cabeca;

    while(aux != NULL)
    {
        remove(l,0);
        aux = l->cabeca;
    }
}
