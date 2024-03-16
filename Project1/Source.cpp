#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int seed;
    int nums[5];
    int Negative = -1;
    int Positive = -1;
    printf("enter starting value: ");
    scanf("%d", &seed);
    srand(seed);

    
    for (int i = 0; i < 5; i++) {
        nums[i] = rand() % 21 - 10; 
    }

    printf("original masiv: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        if (nums[i] < 0 && Negative == -1) {
            Negative = i;
        }
        if (nums[i] > 0) {
            Positive = i;
        }
    }
    if (Negative != -1 && Positive != -1) { 
        int temp = nums[Negative];
        nums[Negative] = nums[Positive];
        nums[Positive] = temp;

        printf("changed masiv: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", nums[i]);
        }
        printf("\n");
    }
    else {
        printf("ERROR\n");
    }

    return 0;
}
