#include <stdio.h>

int main() {

    double salario, novoSalario, reajuste;
    int valorPercentual;

    scanf("%lf", &salario);

    if(salario <= 400){
        valorPercentual = 15;
    }
    else if(salario <= 800){
        valorPercentual = 12;
    }
    else if(salario <= 1200){
        valorPercentual = 10;
    }
    else if(salario <= 2000){
        valorPercentual = 7;
    }
    else{
        valorPercentual = 4;
    }

    reajuste = salario*valorPercentual/100;
    novoSalario = salario + reajuste;

    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", valorPercentual);

    return 0;
}
