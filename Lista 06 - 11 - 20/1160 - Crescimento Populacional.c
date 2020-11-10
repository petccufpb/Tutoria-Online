// URI 1160 - Crescimento Populacional
#include <stdio.h>

int main(void) {
    int i, j, casos, popA, popB;
    int crescA, crescB;
    double taxaA, taxaB;

    scanf("%d", &casos); //Quantidade de casos de testes

    for(i = 0; i < casos; i++){
        int tempo = 0; //Reinicializa o tempo para cada caso teste.

        scanf("%d %d %lf %lf", &popA, &popB, &taxaA, &taxaB);

        //Simula o cescrimento das populações das cidades A e B no decorre dos anos.
        while(popA <= popB){

            //Atualização das populaçes das cidades A e B
            popA = popA*(1 + (taxaA/100));
            popB = popB*(1 + (taxaB/100));

            //Incrementando o tempo, pois a cada cálculo de crescA e crescB se passa um ano
            tempo++;

            //Qualquer tempo maior que 100, entra no caso "Mais de 1 seculo". Portanto, posso encerrar a simulação.
            if (tempo > 100){
                break;
            }
        }//Fim do while

        //Resultado da Simulação
        if (tempo > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", tempo);
        }
    }
    return 0;
}
