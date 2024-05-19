#include <stdio.h>
#include <string.h>

int main()
{
    float a, b, c;
    char choice;

    printf("Enter A for addition.\n");
    printf("Enter S for subtraction.\n");
    printf("Enter M for multiplication.\n");
    printf("Enter D for division.\n");

    printf("Enter your choice: ");
    scanf(" %c", &choice);

    switch (choice)
    {
    case 'A':
        printf("Enter first number: ");
        scanf("%f", &a);
        printf("Enter second number: ");
        scanf("%f", &b);
        c = a + b;
        printf("The sum is: %f\n", c);
        break;
    case 'S':
        printf("Enter first number: ");
        scanf("%f", &a);
        printf("Enter second number: ");
        scanf("%f", &b);
        c = a - b;
        printf("The subtraction is: %f\n", c);
        break;
    case 'M':
        printf("Enter first number: ");
        scanf("%f", &a);
        printf("Enter second number: ");
        scanf("%f", &b);
        c = a * b;
        printf("The multiplication is: %f\n", c);
        break;
    case 'D':
        printf("Enter first number: ");
        scanf("%f", &a);
        printf("Enter second number: ");
        scanf("%f", &b);
        c = a / b;
        printf("The division is: %f\n", c);
        break;
    default:
        printf("Wrong input\n");
        break;
    }

    return 0;
}
