#include<stdio.h>

// subprograma para preencher matrizes.
    void preencherMatriz( int *matriz, int lin, int colun, char name ){
        
        //no main, deve ser enviado como parâmetro para "name": "A"(..Matriz A) ou "B"(..Matriz B).
        //estou assumindo que o usuário terá que criar as duas matrizes (A e b) para serem somadas e tivermos a Matriz C.
       
       printf("\n --Preenchendo Matriz %c--", name);
        for(int i = 0; i < lin; i++){
            for(int j = 0; j < colun; j++){
                printf("\n%c[%d][%d]: ", name, i + 1, j + 1);
                scanf("%d", &matriz[i * colun + j]);
            }
        } 
    }
int main(){
    int l, c;
            
            printf("\nInforme a quantidade de linhas: ");
            scanf("%d", &l);
            printf("\nInforme a quantidade de colunas: ");
            scanf("%d", &c);
            
            int tamTotal = l * c;
            
            int matA[tamTotal];
            int matB[tamTotal];
            int matC[tamTotal];
            
            preencherMatriz(matA, l, c, 'A');
            preencherMatriz(matB, l, c, 'B');
    return 0;
}
