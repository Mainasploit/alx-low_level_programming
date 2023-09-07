#include <stdio.h>

int main() {
    printf("Size of a char: %lu byte(s)\n", sizeof(char));
    printf("Size of an int: %lu byte(s)\n", sizeof(int));
    printf("Size of a long int: %lu byte(s)\n", sizeof(long));
    printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
    printf("Size of a float: %lu byte(s)\n", sizeof(float));

    printf("\n");

    #ifdef __i386__
    printf("Running on a 32-bit architecture.\n");
    #elif __x86_64__
    printf("Running on a 64-bit architecture.\n");
    #else
    printf("Architecture not recognized.\n");
    #endif

    return 0;
}
}
