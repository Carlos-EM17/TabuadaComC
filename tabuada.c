#include <stdio.h>

int main (){

    int numerodatabuada;
    int casamaxima;

    printf("Qual tabuada voce deseja ver?", numerodatabuada);
    scanf("%d", &numerodatabuada);
    printf("Até que casa da tabuada?", casamaxima);
    scanf("%d", &casamaxima);


    for (int i = 0; i <= casamaxima; i++){

        int calculo = i * numerodatabuada;

        printf("na casa %d, o valor é: %d\n", i, calculo);

    }
  
}