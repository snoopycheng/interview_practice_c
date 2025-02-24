#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    int len;

    strcpy(str, "shibainu is cute.");

    len = strlen(str);

    printf("|%s| = %d \n", str, len);

    return 0;
}