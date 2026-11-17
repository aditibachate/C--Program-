
#include <stdio.h>

// Function to exchange values using pointers
void fun_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    // Accept values from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Display values before swapping
    printf("\nBefore Swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    // Call function by passing addresses
    fun_swap(&num1, &num2);

    // Display values after swapping
    printf("\nAfter Swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}
