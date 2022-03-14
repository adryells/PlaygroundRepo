#include <stdio.h>

#include <stdio.h>

int main()
{
    int inteiro = 10;
    float flutuante = 1.5;
    char caractere ='p';

    int *pi = &inteiro;
    float *pf= &flutuante;
    char  *pc = &caractere;

   *pi = 100;
   *pf = 0.2;
   *pc = 'b';

    printf("Int antes %i ", &inteiro);
    printf("\nFloat antes %f",  &flutuante);
    printf("\nChar antes %c", &caractere);

    printf("\nInt após %i ", *pi);
    printf("\nFloat após %f",  *pf);
    printf("\nChar após %c", *pc);



}
