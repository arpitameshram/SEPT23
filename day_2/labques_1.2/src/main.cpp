#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;


    printf("Enter the first integer: ");
    scanf("%d", &num1);


    printf("Enter the second integer: ");
    scanf("%d", &num2);


    ptr1 = &num1;
    ptr2 = &num2;


    int sum = *ptr1 + *ptr2;


    printf("Sum of %d and %d is %d\n", *ptr1, *ptr2, sum);

    return 0;
}


