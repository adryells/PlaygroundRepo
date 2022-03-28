#include <stdio.h>
// Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char.
// Associe as variaveis aos ponteiros (use &). Modifique os valores de cada variavel usando os ponteiros.
// Imprima os valores das variaveis antes e apos as modificacoes.

// REPLIT: https://replit.com/@adryellpaulo/question1c#main.c

int main(void) {
  int inteiro = 1;
  float real = 1.2;
  char charactere = 'a';

  int *p_inteiro = &inteiro;
  float *p_real = &real;
  char *p_charactere = &charactere;

  printf("ANTES");
  printf("%i\n", *p_inteiro);
  printf("%2.1f\n", *p_real);
  printf("%c\n", *p_charactere);

  *p_inteiro = 2;
  *p_real = 1.1;
  *p_charactere = 'b';

  printf("DEPOIS");
  printf("%i\n", *p_inteiro);
  printf("%2.1f\n", *p_real);
  printf("%c\n", *p_charactere);
  
  return 0;
}