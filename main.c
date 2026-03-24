#include <stdio.h>
#include <stdlib.h>

void exibirmatriz(int linhas, int colunas, int vetor[linhas * colunas]) {
    printf("\nMatriz Atual\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", vetor[i * colunas + j]);
        }
        printf("\n");
    }
}

int buscar(int li, int co, int colunas, int linhas, int vetor[linhas * colunas], int elemento) {
    vetor[(li * colunas) + co] = elemento;
    return vetor[(li * colunas) + co];
}

void zerarmatriz(int linhas, int colunas, int vetor[linhas * colunas]) {
    for (int i = 0; i < linhas * colunas; i++) {
        vetor[i] = 0;
    }
    exibirmatriz(linhas, colunas, vetor);
}


void adicionarelemento(int linhas, int colunas, int vetor[linhas * colunas]) {
    int elemento, linha, coluna, n = 1;
    while(n){
    printf("\nInforme qual elemento deseja adicionar: ");
    scanf("%d", &elemento);
    printf("Informe qual a linha e a coluna (ex: 1 2): ");
    scanf("%d %d", &linha, &coluna);

    linha--; 
    coluna--;

    if (linha >= 0 && linha < linhas && coluna >= 0 && coluna < colunas) {
        vetor[linha * colunas + coluna] = buscar(linha, coluna, colunas, linhas, vetor, elemento);
    } else {
        printf("\nPosicao invalida!\n");
    }

    exibirmatriz(linhas, colunas, vetor);
    printf("Deseja adicionar mais algum elemento? 1 pra sim 0 pra nao");
    scanf("%d",&n);
}
}

int main() {
    int linhas, colunas; 
    system("cls");
    printf("Informe a quantidade de linhas e colunas: ");
    scanf("%d %d", &linhas, &colunas);
    int vetor[linhas * colunas];
    zerarmatriz(linhas, colunas, vetor);
    adicionarelemento(linhas, colunas, vetor);
    
    return 0;
}