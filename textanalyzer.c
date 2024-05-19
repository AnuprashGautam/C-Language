#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char str[100] = {0};
    char substr[50][50] = {0};
    
    printf("Enter the text:\n");
    scanf("%[^\n]", str); 

    int length = strlen(str);
    int a = 0; // Count of words

    // Variables to store the length of the largest and smallest words
    int largest_length = 0;
    int smallest_length = INT_MAX; // Initialize to a very large value

    for (int i = 0; i < length; i++) {
        if (str[i] == ' ') {
            continue; // Skip consecutive spaces
        }

        int b = 0; // Character count within a word

        while (str[i] != ' ' && str[i] != '\0') {
            substr[a][b] = str[i];
            i++; // Move to the next character in str
            b++;
        }
        
        substr[a][b] = '\0'; // Null-terminate the word
        a++; // Move to the next word

        // Update largest and smallest word lengths and words
        int word_length = strlen(substr[a - 1]);
        if (word_length > largest_length) {
            largest_length = word_length;
        }
        if (word_length < smallest_length && word_length > 0) {
            smallest_length = word_length;
        }
    }

    printf("\nPrint the words of text:\n");
    for (int i = 0; i < a; i++) {
        printf("%s\n", substr[i]);
    }

    // Print the largest and smallest words
    printf("\nLargest word: ");
    for (int i = 0; i < a; i++) {
        if (strlen(substr[i]) == largest_length) {
            printf("%s\n", substr[i]);
            break; // Only print the first occurrence of the largest word
        }
    }

    printf("Smallest word: ");
    for (int i = 0; i < a; i++) {
        if (strlen(substr[i]) == smallest_length) {
            printf("%s\n", substr[i]);
            break; // Only print the first occurrence of the smallest word
        }
    }

    return 0;
}
