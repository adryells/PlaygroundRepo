#include <stdio.h>

int get_array(int array){
    int *arr = array;

    return *arr;
}

int main()
{
    int array[1][1] = {1};

    int parray = get_array(array);


    printf("\n%i ", *(parray));




}
