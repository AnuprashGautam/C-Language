#include <stdio.h>
#include <string.h>

void reverse(char str[50]) {
    int i, n;
    char reversed[50] = "";

    n = strlen(str);
    for (i = n - 1; i >= 0; i--) {
        strncat(reversed, &str[i], 1);
    }

    strcpy(str, reversed);
}

int main() {
    char str[50];

    printf("Enter the string: ");
    scanf("%s", str);

    printf("The reversed string is: ");
    reverse(str);
    printf("%s\n", str);

    return 0;
}
