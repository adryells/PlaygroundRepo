#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int n, m;
    printf("Numero de linhas: \n");
    scanf("%f", &n);
    printf("Numero de colunas: \n");
    scanf("%f", &m);

    float **m1[n][m], **m2[n][m], **sm[n][m];

    m1 = malloc(n * sizeof(float*));

    for (int i = 0; i < n; i++){
        m1[i] = malloc(m * sizeof(int));
    };


    m2 = malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++){
        m2[i] = malloc(m * sizeof(int));
    };

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            m1[n][m] = 3;
            m2[n][m] = 5;
            sm[n][m] = m1[n][m] + m2[n][m];
        }
    };

    printf("A matriz soma de m1 e m2 ficou assim: ");
    for(n = 0; m < 5; n++){
        for(m = 0; m < 5; m++)
            printf("%d", sm[n][m]);
    }

    free(m1);
    free(m2);

    return 0;
}
