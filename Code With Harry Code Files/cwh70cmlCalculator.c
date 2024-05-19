#include <stdio.h>
#include <string.h>
#include <stdlib.h>//for atof()
int main(int argc, char *argv[]) {
    float a, b, c;
    a = atof(argv[1]);
    b = atof(argv[2]);

    if (strcmp(argv[3], "Addition") == 0) {
        c = a + b;
        printf("Addition: %.2f\n", c);
    } else if (strcmp(argv[3], "Subtraction") == 0) {
        c = a - b;
        printf("Subtraction: %.2f\n", c);
    } else if (strcmp(argv[3], "Multiplication") == 0) {
        c = a * b;
        printf("Multiplication: %.2f\n", c);
    } else if (strcmp(argv[3], "Division") == 0) {
        if (b != 0) {
            c = a / b;
            printf("Division: %.2f\n", c);
        } else {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
    } else {
        printf("Error: Invalid operation.\n");
        return 1;
    }

    return 0;
}
