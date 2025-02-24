#include<stdio.h>

int main(){
    int array[] = {1, 2};
    int *p = array;
    // int v = ++*p;
    // int v = *p++;
    int v = *++p;

    printf("v = %d, array[0] = %d, array[1] = %d, *p = %d\n", v, array[0], array[1], *p);

    return 0;
}