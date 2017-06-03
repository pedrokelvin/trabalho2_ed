Lista* cria_lista(){

    Lista *l;

    l = (Lista *) malloc(sizeof(Lista));
    l->cabeca = (Nodo *) malloc(sizeof(Nodo));
    l->cabeca->Tree = (Tree *) malloc(sizeof(Tree));
    l->cabeca->prox = NULL;
    l->cabeca->ant = NULL;

    return l;
}
/*---------------------------------------------------------------------------*/
int vazia_lista(Lista* l){
    return(l->cabeca == NULL);
}
/*---------------------------------------------------------------------------*/
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
/*---------------------------------------------------------------------------*/
}
