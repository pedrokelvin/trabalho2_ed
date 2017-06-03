/*Assinaturas das funções de manipulação da lista*/

typedef struct nodo{
    Tree  *personagem;
    struct nodo* prox;
    struct nodo *ant;

}Nodo;

typedef struct lista{
    Nodo* cabeca;
}Lista;

Lista* cria_lista();
int vazia_lista(Lista* l);
void remove_lista(Lista *l, int posicao);
void free_lista(Lista *l);
