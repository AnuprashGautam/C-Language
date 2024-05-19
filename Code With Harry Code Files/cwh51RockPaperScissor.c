// #include<stdio.h>
// #include<time.h>
// #include<stdlib.h>
// int generatenumber(int n){
//     srand(time(NULL));
//     return rand()%n;
// }
// int main()
// {
//     int a;
//     printf("Enter the maximum number:");
//     scanf("%d",&a);
//     printf("Generated number is:%d",generatenumber(a));
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int generate()
{
    srand(time(NULL));
    return rand() % 3;
}

int main()
{
    int a, b, i = 0, x = 0, y = 0;
    char player[10], computer[10], name[20];

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Welcome to the game, %s!\n", name);

    printf("Enter \"Rock\" for rock.\n");
    printf("Enter \"Paper\" for paper.\n");
    printf("Enter \"Scissor\" for scissor.\n");

    while (i < 3)
    {
        printf("Enter your choice: ");
        scanf("%s", player);

        if (strcmp(player, "Rock") == 0)
        {
            a = 0;
        }
        else if (strcmp(player, "Paper") == 0)
        {
            a = 1;
        }
        else if (strcmp(player, "Scissor") == 0)
        {
            a = 2;
        }
        else
        {
            goto end;
        }

        b = generate();

        if (b == 0)
        {
            strcpy(computer, "Rock");
        }
        else if (b == 1)
        {
            strcpy(computer, "Paper");
        }
        else
        {
            strcpy(computer, "Scissor");
        }

        printf("Computer's choice is: %s\n", computer);

        if (a == 0 && b == 1)
        {
            y++;
        }
        else if (a == 0 && b == 2)
        {
            x++;
        }
        else if (a == 1 && b == 0)
        {
            x++;
        }
        else if (a == 1 && b == 2)
        {
            y++;
        }
        else if (a == 2 && b == 0)
        {
            y++;
        }
        else if (a == 2 && b == 1)
        {
            x++;
        }

        i++;
        printf("Your Score=%d\n",x);
        printf("Computer's Score=%d\n\n",y);
    }


    if (x > y)
    {
        printf("Winner is %s\n", name);
    }
    else if (y > x)
    {
        printf("Computer Won.\n");
    }
    else
    {
        printf("Draw\n");
    }
    end:
    printf("Game Over!\n");
    return 0;
}
 