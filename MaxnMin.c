#include <stdio.h>

// main program
int main(void) {
    int i, m;
    // Enter the Number of element of Array
    printf("How many Number you want to enter ");
    scanf("%d",&m);
    
    int num[m];
    for (i = 0; i < m; i++) {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
        }
    
    // calculate max and minimum values and print them
    int min = num[0];
    int max = num[0];

    for (int i = 1; i < m; i++) {
        if (max < num[i]) {
            max = num[i];
        } else if (min > num[i]) {
            min = num[i];
        }
    }

    printf("The max is %d and the min is %d", max, min);

    return 0;
}


