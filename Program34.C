
#include <stdio.h>

union Data
{
    int i;
    float f;
    char ch;
};

int main()
{
    union Data d;

    // Display total memory allocated to union
    printf("Size of Union: %lu bytes\n", sizeof(d));

    // Display memory size of each member
    printf("\nMemory Size of Each Member:\n");
    printf("Integer: %lu bytes\n", sizeof(d.i));
    printf("Float: %lu bytes\n", sizeof(d.f));
    printf("Character: %lu bytes\n", sizeof(d.ch));

    // Display memory address of each member
    printf("\nMemory Address of Each Member:\n");
    printf("Address of Integer: %p\n", (void *)&d.i);
    printf("Address of Float: %p\n", (void *)&d.f);
    printf("Address of Character: %p\n", (void *)&d.ch);

    // Assign value to integer member
    d.i = 100;
    printf("\nInteger Value: %d\n", d.i);

    // Assign value to float member
    d.f = 25.5;
    printf("Float Value: %.2f\n", d.f);

    // Assign value to character member
    d.ch = 'A';
    printf("Character Value: %c\n", d.ch);

    return 0;
}
