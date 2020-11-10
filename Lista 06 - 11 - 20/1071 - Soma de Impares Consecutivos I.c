#include <stdio.h>

int main(void) {
    int a, b, soma = 0;
    int i, hold; // Variaveis auxiliares

    scanf("%d %d", &a, &b);

    if(b < a){ // Garante que 'a' sempre será o inicio do intervalo, 'b' o final
        hold = a; // Troca simples das variaveis
        a = b;
        b = hold;
    }

    for(i = a + 1; i < b; i++){
        if(i % 2 != 0){ //Verifica se o numero é impar
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}
