#include <stdio.h>

int main(void) {

    int i, j, linha;
    double media = 0, soma = 0;
    double matriz[12][12];
    char operacao;

    //Neste caso, o '\n' contorna o problema da linguagem C de leitura de caracteres.
    scanf("%d\n", &linha);
    scanf("%c", &operacao);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            // Preenchendo a matriz;
            scanf("%lf", &matriz[i][j]);

            if (i == linha){
                soma += matriz[i][j];
            }
        }
    }

    if(operacao == 'S'){
        printf("%.1f\n", soma);
    }else{
        media = soma/12;
        printf("%.1f\n", media);
    }

    return 0;
}
