#include <stdio.h>


int add(int a, int b);

int main() {
    int num1 = 5, num2 = 3;
    int result;

    
    result = add(num1, num2);

    
    printf("Sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}


int add(int a, int b) {
    return a + b;
}
