#include <stdio.h>

int main() {

    int i, qtdCasos, valor;

    scanf("%d", &qtdCasos);

    for(i = 0; i < qtdCasos; i++){
        scanf("%d", &valor);

        if(valor == 0){
            puts("NULL");
            continue;
        }

        if(valor%2 == 0){
            printf("EVEN ");
        }else{
            printf("ODD ");
        }

        if(valor < 0){
            printf("NEGATIVE\n");
        }else{
            printf("POSITIVE\n");
        }
    }
    return 0;
}
