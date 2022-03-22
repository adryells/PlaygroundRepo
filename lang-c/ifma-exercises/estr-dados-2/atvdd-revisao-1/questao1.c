#include <stdio.h>
int main()
{
    //Fazer um programa em C que pergunta um valor em metros e imprime ocorrespondente em decímetros, centímetros e milímetros.
    float metros;

    printf("Escreva o valor em metros: ");
    scanf("%f", &metros);

    printf("%.1f metros em decimetros é %.2fdm\n. ", metros, metros*10);
    printf("%.1f metros em centimetros é %.2fdm\n. ", metros, metros*100);
    printf("%.1f metros em milimetros é %.2fdm. ", metros, metros*1000);

   return metros;
}
