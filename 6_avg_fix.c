/* 6_avg_fix.c: Using loops and branching */

# include <stdio.h>

main() {
    int i, numberOfNums=0, total=0, value;
    float average;
    
    printf("How many numbers are to be read?\n");
    scanf("%d", &numberOfNums);
    
    for(i=0; i<numberOfNums; i++) {
        scanf("%d", &value);
        total += value;
        printf("Read %d\n", value);
    }
    average = (float)total / (float)numberOfNums;
    printf("You read %d values. Average =%f.\n", numberOfNums, average);
    
    return 0;
}