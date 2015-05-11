/* 5_forFactorial.c: Using a FOR loop to find factorial of numbers. */

# include <stdio.h>

main() {
    int answer = 1;
    int i;
    printf("Factorial of 5 by direct multiplication yields: %d\n", 5*4*3*2*1);
    printf("Factorial of 10 by direct multiplication yields: %d\n", 10*9*8*7*6*5*4*3*2*1);
    for (i=1; i<=10; i++) {
        answer = answer * i;
        printf("Factorial of %d = %d\n", i, answer);
    }
    return 0;
}