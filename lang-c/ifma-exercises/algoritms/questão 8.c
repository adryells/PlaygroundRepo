#include <stdio.h>
#include <stdlib.h>
int dobra_valor(int a, int b)
{
    a = 2*a;
    b = 2*b;
    int valores[2];

    valores[0] = a;
    valores[1] = b;

    return valores[2];
}
int main()
{
    int a = 2;
    int b = 4;
    int calc = dobra_valor(a,b);

    for (int i = 0; i<2; i++){
        printf("%i",&calc);
    };
    return 0 ;
}
