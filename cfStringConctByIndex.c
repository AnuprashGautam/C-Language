#include <stdio.h>
#include <string.h>
#define MAX_LEN 1001 // maximum length of input string
int main() {
    int t;
    scanf("%d", &t);
    char S[MAX_LEN];
    for (int i = 0; i < t; i++) {
        scanf("%s", S);
        int len = strlen(S); // get the length of the input string
        char X[MAX_LEN * 2];
        int j;
        for (j = 0; j < len; j++) {
            X[j] = S[j]; // copy S into X
        }
        int k;
        for (k = 0; k < len; k++) {
            X[len+k] = S[k]; // concatenate S with itself
        }
        printf("\n%d\n",j+k);
        X[j+k] = '\0'; // terminate the string
        printf("%s\n", X); // output the concatenated string
    }
    return 0;
}
     