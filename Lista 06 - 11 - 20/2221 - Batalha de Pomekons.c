#include<stdio.h>
#include <math.h>

int ValorGolpe(int bonus, int ataque, int defesa, int level){
    int golpe = (ataque+defesa)/2;

    if(level%2 == 0){
        golpe += bonus;
    }

    return golpe;
}


int main(){
    int qtdCasos, i, j;
    int bonus,ataque, defesa, level;
    int pokemonDabriel, pokemonGuarte;

    scanf("%d", &qtdCasos);

    for(i = 0; i < qtdCasos; i++){
        scanf("%d", &bonus);

        scanf("%d %d %d", &ataque, &defesa, &level);
        pokemonDabriel = ValorGolpe(bonus, ataque, defesa, level);

        scanf("%d %d %d", &ataque, &defesa, &level);
        pokemonGuarte = ValorGolpe(bonus, ataque, defesa, level);

        if(pokemonDabriel > pokemonGuarte){
            puts("Dabriel");
        }else if(pokemonDabriel < pokemonGuarte){
            puts("Guarte");
        }else{
            puts("Empate");
        }
    }

    return 0;
}
