#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "printPersonagem.h"
#include "arvore.h"
#include "criador.h"
#include "lista.h"
#include "preenchimento.h"

//oi

void preenche_personagem(Tree* personagem){
	int i=1;
}



int main(){
	int i;
	srand(time(NULL));
	i=rand()%5;
	printf("Número aleatório: %d.\n", i);

	/*Criamos uma arvore de personagem para testes */
	/*Lembre-se que ela recebe o id do personagem */
	Tree* personagem = cria_arvore_personagem(0);
	Genetica* olhos_cor_1 = cria_cor_olhos();
	imprime_genetica(olhos_cor_1);

	imprime_arvore(personagem);
	printf("\nO personagem impresso graficamente nao corresponde ao personagem vazio impresso de forma textual");
	printf("\n\n");



	/*Caso queira testar a biblioteca grafica */
	imprime_personagem_aleatorio();
    return 0;
}
