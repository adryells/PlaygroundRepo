#include <stdio.h>

int main(){
    int valor_gasolina, litros;

    printf("valor do litro: ");
    scanf("%d", &valor_gasolina);

    printf("litros: ");
    scanf("%d", &litros);

    printf("Custará R$ %d,00", valor_gasolina * litros);
};
