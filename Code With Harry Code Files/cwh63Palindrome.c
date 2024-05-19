#include <stdio.h>

int isPalindrome(int num)
{
    int digit, m,rev=0;
    m=num;
    while(m!=0){
         digit=m%10;
         rev=rev*10+digit;
         m=m/10;
    }
    if (rev==num){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    if (isPalindrome(number)){
        printf("This number is a Palindrome.\n");
    }
    else{
        printf("This number is not a Palindrome.\n");
    }

    return 0;
}
