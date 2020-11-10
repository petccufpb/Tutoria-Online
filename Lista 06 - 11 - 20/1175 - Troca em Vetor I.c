#include<stdio.h>

int main(){
    int i, hold, N[20];

    for(i = 0; i < 20; i++){
        scanf("%d", &N[i]);
    }

    for(i = 0; i < 20; i++){
        if(i < 10){
            hold = N[i];//Guarda o valor das primeiras posições
            N[i] = N[19-i];//Poe os valores ultimas posições nas primeiras
            N[19-i] = hold;//Poe os valores das primeiras posições as ultimas
        }
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
