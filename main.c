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
    return 0;
}
