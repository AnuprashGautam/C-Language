#include<stdio.h>
 
int main() 
{
   int array[50], i, size;
 
   scanf("%d", &size); /*Accepts the size of array from test case data */

   for (i = 0; i < size; i++)
   scanf("%d", &array[i]); /* Read the array elements from the test case data */
       int newSize = 0, j, new_array[100];
    for (i = 0; i < size; i++)
    {
        int isDuplicate = 0;
        for (j = 0; j < newSize; j++)
        {
            if (array[i] == new_array[j])
            {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate)
        {
            new_array[newSize] = array[i];
            newSize++;
        }
    }
    for (i = 0; i < newSize; i++)
    {
        array[i]=new_array[i];
    }
    size=newSize;
    for (i = 0; i < size; i++) {
      printf("%d\n", array[i]);
   }
   return 0;
}