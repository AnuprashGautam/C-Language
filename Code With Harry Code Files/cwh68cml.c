// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     printf("The value of argc is:%d\n", argc);
//     for (int i = 0; i < argc; i++)
//     {
//         printf("This argument at index number %d has a value of %s \n", i, argv[i]);
//     }
//     return 0;
// }
////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum = 0;
    
    // Check if there are numbers provided
    if (argc <= 1) {
        printf("No numbers provided.\n");
        return 0;
    }
    
    // Iterate through each command line argument (excluding the program name)
    for (int i = 1; i < argc; i++) {
        // Convert the argument to an integer
        int number = atoi(argv[i]);
        sum += number;
    }
    
    printf("Sum: %d\n", sum);
    
    return 0;
}
