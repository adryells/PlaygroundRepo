#include <stdio.h>

int main(void) {

  float n1, n2, n3;
  char option;

  printf("N1:");
  scanf("%f", &n1);
  
  printf("N2:");
  scanf("%f", &n1);
  
  printf("N3:");
  scanf("%f", &n1);

  printf("Você quer a média aritmetica, ponderada ou harmonica: [A, P OU H]");
  scanf("%c", &option);

  if(option == "H"){
    printf("A média harmonica é: %f", (1/n1, 1/n2, 1/n3)/3);
  } else if (option == "P"){
    printf("A média ponderada é: %f", (n1 * 5, n2 * 3, n3 * 2)/10);
  } else if (option == "A"){
    printf("A média aritmética é: %f", (n1, n2, n3)/3);
  } else {
    printf("Opção invalida");
  }
  
  
  return 0;
}
