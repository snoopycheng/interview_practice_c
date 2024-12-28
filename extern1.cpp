#include<stdio.h>


extern void func1(void) { printf("1\n"); };
extern void func2(void) { printf("2\n"); };
extern void func3(void) { printf("3\n"); };
extern void func4(void) { printf("4\n"); };
extern void func5(void) { printf("5\n"); };


int main(){
    int n;
    printf("input n: ");
    scanf("%d", &n);


    void(*fp[5])(void);
    fp[0] = func1;
    fp[1] = func2;
    fp[2] = func3;
    fp[3] = func4;
    fp[4] = func5;
    fp[(n - 1)]();

    return 0;
}
