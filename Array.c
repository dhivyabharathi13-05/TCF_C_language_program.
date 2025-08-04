#include <stdio.h>

int main() {
    int numbers[5]; // Declare an array of 5 integers

    // Input values into the array
    printf("Enter 5 integers:\n");
    for(int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the values from the array
    printf("\nYou entered:\n");
    for(int i = 0; i < 5; i++) {
        printf("Number %d: %d\n", i + 1, numbers[i]);
    }

    return 0;
}
