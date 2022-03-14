
#include <stdio.h>
int main(){
    int array[] = {1,2,3,4};
    int *arr = array;

    for (int i =0; i<4; i++){
        arr = &array[i];

        printf("V[%i] = %i\r\n", i, *(arr));
    };

}
