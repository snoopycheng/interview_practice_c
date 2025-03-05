#include <stdio.h>

#define OS 2  // 1=Windows, 2=Mac, 3=Linux

int main() {
#if OS == 1
    printf("Running on Windows.\n");
#elif OS == 2
    printf("Running on Mac.\n");
#elif OS == 3
    printf("Running on Linux.\n");
#else
    printf("Unknown OS.\n");
#endif

    return 0;
}
