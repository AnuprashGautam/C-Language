#include <stdio.h>
#include <string.h>

void parse(char *string)
{
    int index = 0, in = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 0;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 1;
            continue;
        }
        if (in == 1)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    // Removing starting spaces.
    int i = 0;
    while (string[i] == ' ')
    {
        i++;
    }
    int j = 0;
    while (string[i] != '\0')
    {
        string[j] = string[i];
        i++;
        j++;
    }
    string[j] = '\0';

    // Removing ending spaces.
    i = strlen(string) - 1;
    while (string[i] == ' ')
    {
        string[i] = '\0';
        i--;
    }
}

int main()
{
    char string[] = "<h1>    MY NAME IS KHAN.      </h1>";
    parse(string);
    printf("The parsed string is:\n%s", string);
    return 0;
}
