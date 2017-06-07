void insere(Tree* nodo, Genetica* carac){
  if(nodo->info != NULL){
    return;
  }
  if(nodo->left)
  else{
    if(nodo->left != NULL){
      insere(nodo->left, carac);
    }
    if(nodo->right != NULL){
      insere(nodo->right, carac);
    }
    else if(nodo->info == NULL){
      nodo->info = carac;
    return;
    }
  }



}

void preenche_olhos_cor(Tree* personagem, Genetica* cor1, Genetica* cor2){
    insere(personagem, cor 1);


}

void preenche_olhos_tipo(Tree* personagem, Genetica* tipo1, Genetica* tipo2){

}

void preenche_personagem_inicial(Tree* personagem){
  Genetica* olhos_cor_1 = cria_cor_olhos();
  Genetica* olhos_cor_2 = cria_cor_olhos();

  Genetica* olhos_tipo_1 = cria_tipo_olhos();
  Genetica* olhos_tipo_2 = cria_tipo_olhos();

  preenche_olhos_cor(personagem, olhos_cor_1, olhos_cor_2);
  preenche_olhos_tipo(personagem, olhos_tipo_1, olhos_tipo_2);
}
