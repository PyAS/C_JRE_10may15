/* 5_forFactorial.c: Using a FOR loop to find factorial of numbers. */

# include <stdio.h>

main() {
    int answer = 1;
    int i;
    for (i=1; i<=10; i++) {
        answer = answer * i;
        printf("Factorial of %d = %d\n", i, answer);
    }
    return 0;
}