#include <stdio.h>

main(){
    int numero;
    printf("numero: ");
    scanf("%d", &numero);

    for(int i = 1; i <= 10; i++){
        printf("%d X %d = %d\n", numero, i, numero * i);
    };
};
