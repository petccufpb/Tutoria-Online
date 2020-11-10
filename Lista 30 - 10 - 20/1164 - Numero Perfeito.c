#include <stdio.h>

int main() {

    int valor, qtdCasos, i, j;
    int somatorio;

    scanf("%d", &qtdCasos);

    for(i = 0; i < qtdCasos; i++){
        somatorio = 0;
        scanf("%d", &valor);
        for(j = 1; j < valor; j++){
            if(valor % j == 0){
                somatorio += j;
            }
        }
        if(somatorio == valor){
            printf("%d eh perfeito\n", valor);
        }else{
            printf("%d nao eh perfeito\n", valor);
        }
    }

    return 0;
}
