#include <stdio.h>

int main() {

    int idade;
    double media;
    int somatorio = 0;
    int qtdIdades = 0;

    while(1){
        scanf("%d", &idade);

        if(idade >= 0){
            somatorio += idade;
            qtdIdades++;
        }else{
            break;
        }
    }

    if(qtdIdades != 0){
        media = (double) somatorio/qtdIdades;
        printf("%.2lf\n", media);
    }else{
        return 1;
    }
    return 0;
}
