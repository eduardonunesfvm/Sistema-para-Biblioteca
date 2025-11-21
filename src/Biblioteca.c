#include <stdio.h>
#include <ctype.h>

struct livro {
   char genero;
   int isbn;
   int tombo;
   char situacao;
};

int tombo_existe(struct livro acervo[], int novo_tombo, int posicao){
    int existe = -1;

    for (int i=0; i< posicao; i++){
        if (novo_tombo == acervo[i].tombo)
            existe = i;
    }
    return existe;
}

void cadastrar_livros(struct livro acervo[]){
    int existe;
    for (int i=0; i<250; i++){
        do {
            printf("digite o genero F – ficção; R – romance; B – biografia; P – poesia; T – técnico");
            scanf(" %c", &acervo[i].genero);
            acervo[i].genero = toupper(acervo[i].genero);
        } while (acervo[i].genero != 'F' && acervo[i].genero != 'R' && acervo[i].genero != 'B' && acervo[i].genero != 'P' && acervo[i].genero != 'T');

        printf("Digite o ISBN: ");
        scanf("%i", &acervo[i].isbn);

    do {
        printf("Digite o numero do tombo: ");
        scanf("%i", &acervo[i].tombo);
        existe = tombo_existe(acervo, acervo[i].tombo, i);
        if (existe != -1) {
            printf("\ntombo duplicado. por favor, digite novamente\n");
        }
    } while (existe != -1);

    acervo[i].situacao = 'D';
    }
 }

void mostrar_acervos (struct livro acervo []){
    for (int i=0; i<250; i++){
        if (acervo[i].situacao == 'D' || acervo[i].situacao == 'E') {
            printf("Genero do livro: %c - ISBN: %i - Tombo: %i\n", acervo[i].genero, acervo[i].isbn, acervo[i].tombo);
        }
    }
}

void fazer_emprestimo (struct livro acervo []){
    int existe;
    int tombo_emprestimo;
    printf("digite o numero do tombo para fazer o emprestimo: ");
    scanf("%i", &tombo_emprestimo);
    existe = tombo_existe(acervo, tombo_emprestimo, 250);
    if (existe ==  -1)
        printf("\nTombo nao existe no acervo.");
    else {
        if (acervo[existe].situacao == 'E')
            printf("\nLivro ja esta emprestado");
        else {
            acervo[existe].situacao = 'E';
            printf("\nEmprestimo confirmado.");
    }
  }
}

void registrar_devolucao (struct livro acervo[]){
    int existe;
    int tombo_devolucao;
    printf("digite o numero do tombo para fazer a devolucao");
    scanf("%i", &tombo_devolucao);
    existe = tombo_existe(acervo, tombo_devolucao, 250);

    if (existe == -1){
        printf("tombo nao exite no acervo");

    } else {

        if (acervo[existe].situacao == 'D'){
            printf("\nlivro nao esta emprestado \n");

       }else {
            acervo [existe].situacao = 'D';
                printf("\nLivro devolvido com sucesso\n");
    }
  }
}

int main() {

    struct livro acervo[250];
    int i;

    cadastrar_livros(acervo);
    mostrar_acervos(acervo);
    fazer_emprestimo(acervo);
    mostrar_acervos(acervo);
    registrar_devolucao(acervo);

return 0;
}



