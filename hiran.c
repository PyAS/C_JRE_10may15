/* 2_ioDemo.c: Examples for C-Standard I/O Functions: getchar(), putchar(), printf(), scanf() */

# include <stdio.h>

main() {
    char que[100];
    printf("What is your question?\n");
    scanf("%s", que);
    printf("Hi. Your name is Hiranmayi.\nYou are coming from Hyderabad.\nYou just joined your 9th standard.\nYou will enjoy a lot of Physics and Mathematics if you study with your heart and mind.\nEnjoy your holidays and all the best, Hiranmayi!\n");
    return 0;
}
