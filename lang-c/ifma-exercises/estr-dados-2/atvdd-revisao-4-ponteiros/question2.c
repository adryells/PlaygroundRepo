#include <stdio.h>
// Escreva um programa que contenha duas variaveis inteiras. Compare seus enderec ̧os e exiba o maior endereço.
// REPLIT: https://replit.com/@adryellpaulo/question2c#main.c7

int main(void) {
  int n1 = 1;
  int n2 = 2;

  int *p1 = &n1;
  int *p2 = &n2;

  if(p1 > p2){
    printf("%i %i %i", p1, *p1, &p1);
  } else {
    printf("%i %i %i", p2, *p2, &p2);
  };
  
  return 0;
}