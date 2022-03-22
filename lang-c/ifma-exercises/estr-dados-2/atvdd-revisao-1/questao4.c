#include <stdio.h>

int main(void) {
  // Fazer um programa em "C" que lê o preço de um produto e inflaciona essepreço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a100.
  float price_product;
  printf("Escreva o preço do produto: ");
  scanf("%f", &price_product);

  if(price_product < 100){
    price_product = price_product + (price_product * 0.1);
    printf("%.2f é o novo preço do produto.", price_product);
  } else{
    price_product = price_product + (price_product * 0.2);
    printf("%.2f é o novo preço do produto.", price_product);
  }
  return 0;
}
