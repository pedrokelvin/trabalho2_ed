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

    if(cabeca->cabeca == NULL)
        return 1;
    else
        return 0;
}
