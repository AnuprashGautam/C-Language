#include <stdio.h>

int main() {
    int N = 5, X = 0, t = 4;
    for (int i = 0; i < t; i++) {
        // Provide input values directly
        scanf("%d %d", &N, &X);
        int option1 = X;
        int option2 = N - X;
        if (option1 > option2) {
            printf("%d\n", option2);
        } else if (option1 < option2) {
            printf("%d\n", option1);
        } else {
            printf("%d\n", option1);
        }
    }
    return 0;
}
