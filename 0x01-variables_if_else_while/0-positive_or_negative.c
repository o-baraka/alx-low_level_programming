#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Seed the random number generator with the current time

    int n = rand();  // Generate a random number
    
    printf("The number %d is ", n);

    if (n > 0) {
        printf("positive");
    } else if (n < 0) {
        printf("negative");
    } else {
        printf("zero");
    }

    printf("\n");

    return 0;
}
