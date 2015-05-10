/* 4_operators.c: To understand pre and post-increment operators. */

# include <stdio.h>

main() {
    int i=2, j=3, m=7, k, l;
    printf("With given i=%d, j=%d, m=%d:\n", i, j, m);
    k = ++i + j;
    l = m-- + j;
    printf("The expression 'k = ++i + j' yields %d.\n", k);
    printf("The expression 'l = m-- + j' yields %d.\n", l);
    printf("After increment, the new values of i and m are: i=%d and m=%d.\n", i, m);
    return 0;
}