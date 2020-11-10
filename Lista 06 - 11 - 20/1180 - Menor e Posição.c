#include <stdio.h>

int main(){
    int i, N, posicao;
    int menorValor;

    scanf("%d", &N);

    int X[N];

    for(i = 0; i < N; i++){
        scanf("%d", &X[i]);
        if(i == 0 || X[i] < menorValor){
            menorValor = X[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menorValor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
