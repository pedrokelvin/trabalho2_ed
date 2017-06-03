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
int vazia_lista(Lista* cabeca);
