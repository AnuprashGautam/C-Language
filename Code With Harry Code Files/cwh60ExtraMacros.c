// #include<stdio.h>
// int main()
// {
//     printf("The file name is:%s\n",__FILE__);
//     printf("Today's Date is:%s\n",__DATE__);
//     printf("Current time is:%s\n",__TIME__);
//     printf("Current row is:%d\n",__LINE__);
//     printf("ANSI:%d\n",__STDC__);
//     return 0;
// }
////////////////////////////////////////////////////////////////
// #include<stdio.h>
// #define max_val 100
// int main()
// {
//     printf("The maximum value is:%d\n",max_val);
//     #undef max_val
//     #define max_val 200
//     printf("The maximum value is:%d",max_val);
//     return 0;
// }
////////////////////////////////////////////////////////////////////
// #include <stdio.h>

// #define FEATURE_ENABLED  // Comment or uncomment this line to toggle the feature

// #ifdef FEATURE_ENABLED
// void featureFunction()
// {
//     printf("Feature is enabled!\n");
// }
// #else
// void featureFunction()
// {
//     printf("Feature is disabled!\n");
// }
// #endif

// #ifndef ANOTHER_FEATURE_ENABLED
// void anotherFeatureFunction()
// {
//     printf("Another feature is not enabled!\n");
// }
// #endif

// int main()
// {
//     featureFunction();
//     anotherFeatureFunction();

//     return 0;
// }
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>

#define NUMBER 42

int main() {
    #if NUMBER < 10
        printf("The number is less than 10.\n");
    #elif NUMBER < 50
        printf("The number is between 10 and 49.\n");
    #else
        printf("The number is greater than or equal to 50.\n");
    #endif

    return 0;
}

