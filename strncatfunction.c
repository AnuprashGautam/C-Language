#include <stdio.h>
#include <string.h>

int main() {
    char destination[20] = "Hello, ";
    const char *source = "world!";
    size_t num = 3;

    strncat(destination, source, num);

    printf("Concatenated string: %s\n", destination);

    return 0;
}
