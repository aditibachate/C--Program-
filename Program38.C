
#include <stdio.h>

int main()
{
    int num = 100;
    int *ptr;

    ptr = &num;

    // Display using normal variable
    printf("Using Normal Variable:\n");
    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);

    // Display using pointer
    printf("\nUsing Pointer:\n");
    printf("Value of num = %d\n", *ptr);
    printf("Address of num = %p\n", (void *)ptr);

    return 0;
}
