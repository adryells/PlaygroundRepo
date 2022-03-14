#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr, qtdd, maior, menor;
    printf("qtdd:");
    scanf("%d", &qtdd);

    ptr = (int*)malloc(qtdd * sizeof(int));

    for(int i = 0 ; i < qtdd; i++){
        printf("Numero %i: ", i+1);
        scanf("%d", &ptr[i]);

        if(ptr[i] < 18){
            menor++;
        }
        else{
            maior++;
        };
    };

    printf("%i maiores e %i menores", qtdd-menor, menor);

    free(ptr);
    return 0;
}
