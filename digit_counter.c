#include <stdio.h>

int main() {
    int N; 
    printf("Enter the number: ");
    scanf("%d", &N);
    int count = 0, digit;
    int m = N;
    
    if (N == 0) {
        count = 1; // Handle the special case of the number being 0.
    } else {
        while (m != 0) {
            digit = m % 10;
            count++;
            m = m / 10;
        }
    }
    
    printf("The number %d contains %d digits.\n", N, count);
    return 0;
}
