#include <stdio.h>

main(){
    int notas[10], nota, menor, maior;
    for(int i = 0; i<10; i++){
        printf("%d º nota: ", &nota);
        scanf("%d", &nota);

        notas[i] = nota;
    };

    for(int i = 0; i<10; i++){

        if (menor > notas[i]){
            menor = notas[i];
        };

        if (maior < notas[i]){
            maior = notas[i];
        };

    };

    printf("menor: %d", menor);
    printf("\nmaior: %d", maior);
};
