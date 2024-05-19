#include <stdio.h>
int main()
{
    int x=0;
    if (x=x+1){
        printf("t");
    }
    else{
        printf("f");
    }
    return 0;
}
//////////////////////////////////////
#include <stdio.h>
int main()
{
    int x=1;
    if (x=x-1){
        printf("t");
    }
    else{
        printf("f");
    }
    return 0;
}
/////////////////////////////////////
#include <stdio.h>
int main()
{
    int x=0;
    if (x++){
        printf("t");
    }
    else{
        printf("f");
    }
    return 0;
}
///////////////////////////////////////
#include <stdio.h>
int main()
{
    int x=0;
    if (x--){
        printf("t");
    }
    else{
        printf("f");
    }
    return 0;
}