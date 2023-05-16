// pick a number
// generate a random number
// compare

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

void main() {

    // user picks a number
    int user_num;
    while(1) {
        printf("\nPick an integer between 1-5: ");
        scanf("%i", &user_num);
        if (user_num < 1 || user_num > 5) {
            printf("invalid input\n");
        } else {
            break;
        }
    }    

    // computer picks a number
    int cpu_num;
    srand(time(NULL));
    cpu_num = rand() % 5 + 1;

    // check if both numbers are the same
    if (user_num == cpu_num) {
        printf("\nNumbers matched!\n");
    } else {
        printf("\nNumbers did not match!\n");
    }
    printf("User number: %i\n", user_num);
    printf("Cpus number: %i\n\n", cpu_num);
}
