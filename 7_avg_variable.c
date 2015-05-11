/* 7_avg_variable.c: Using loops and branching */

// This program keeps reading in the values as long as user doesn't press Ctrl+D.

# include <stdio.h>

main() {
    int i, numberOfNums=0, total=0, valsRead, value;
    float average;
    
    valsRead = scanf("%d", &value);
    while(valsRead > 0) {
        numberOfNums++;
        total += value;
        printf("Read %d\n", value);
        valsRead = scanf("%d", &value);
    }
    average = (float)total / (float)numberOfNums;
    printf("You read %d values. Average =%f.\n", numberOfNums, average);
    
    return 0;
}
