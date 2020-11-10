#include <stdio.h>

int main() {

    int i;
    double hold; //Armazena o valor recebido
    double N[100];

    scanf("%lf", &hold);
    hold = hold*2; //Dobra o valor recebido

    for(i = 0; i < 100; i++){
        N[i] = hold/2; //Divide o valor da posição anterior por 2
        hold = N[i];
        printf("N[%d] = %.4lf\n", i, N[i]);
    }

    return 0;
}
