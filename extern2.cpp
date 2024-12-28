#include<stdio.h>


extern void func1(void) { printf("33\n"); };
extern void func2(void) { printf("67\n"); };
extern void func3(void) { printf("324\n"); };
extern void func4(void) { printf("231\n"); };
extern void func5(void) { printf("687\n"); };


int main(){
    int n;
    printf("input n: ");
    scanf("%d", &n);


    if (n < 231)
        if (n != 67)
            func1();
        else
            func2();
    else if (n > 231)
        if (n != 324)
            func5();
        else
            func3();
    else
        func4();

    return 0;
}
