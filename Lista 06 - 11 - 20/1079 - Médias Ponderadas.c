#include <stdio.h>

double CalculaMedia(double nota1, double nota2, double nota3){
    return (2*nota1 + 3*nota2 + 5*nota3)/10;
}


int main(void) {
    int qtdCasos, i;
    double media, nota1, nota2, nota3;

    scanf("%d", &qtdCasos);

    for(i = 0; i < qtdCasos; i++){
        scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
        media = CalculaMedia(nota1, nota2, nota3);
        printf("%.1lf\n", media);
    }
    return 0;
}
