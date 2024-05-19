/*#include <stdio.h>
#include <string.h>
int main()
{

    for (int i = -6; i <= 6; i = i + 2)
    {
        printf("%d\t", i);
    }
    return 0;
}*/
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int i,num,factor=0;
//     printf("Enyter the number:");
//     scanf("%d",&num);
//     for(i;i<=num;i++)
//     {
//         if (num%i==0)
//         {
//             factor++;
//         }
//     }
//     if (factor==2)
//     {
//         printf("Number is prime.");
//     }
//     else
//         printf("Number is not prime.");
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int num,digit,sum=0,m;
//     printf("Enter the number:");
//     scanf("%d",&num);
//     m=num;
//     while (m>0)
//     {
//         digit=m%10;
//         sum=sum+digit;
//         m=m/10;123
//     }
//     printf("Sum of %d is:%d",num,sum);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int num, digit, rev = 0, m;
//     printf("Enter the number:");
//     scanf("%d", &num);
//     m = num;
//     while (m > 0)
//     {
//         digit = m % 10;
//         rev = rev * 10 + digit;
//         m = m / 10;
//     }
//     printf("Reverse of %d is:%d", num, rev);
//     return 0;
// }
//
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int num, digit, sum = 0, m, a = 0;
//     printf("Enter the number:");
//     scanf("%d", &num);
//     m = num;
//     while (m > 0)
//     {
//         digit = m % 10;
//         a = digit * digit * digit;
//         sum = sum + a;
//         m = m / 10;
//     }
//     if (sum == num)
//     {
//         printf("Number is armstrong.");
//     }
//     else
//     {
//         printf("Number is not armstrong.");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     for (int n = 1; n <= 100; n++)
//     {
//         int factor = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 factor++;
//             }
//         }
//         if (factor == 2)
//             printf("%d\t", n);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 4; i++)
//     {
//         for (j = 4-i; j >= 0; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
// #include <stdio.h>

// // function to get matrix elements entered by the user
// void getMatrixElements(int matrix[][10], int row, int column) {

//    printf("\nEnter elements: \n");

//    for (int i = 0; i < row; ++i) {
//       for (int j = 0; j < column; ++j) {
//          printf("Enter a%d%d: ", i + 1, j + 1);
//          scanf("%d", &matrix[i][j]);
//       }
//    }
// }

// // function to multiply two matrices
// void multiplyMatrices(int first[][10],
//                       int second[][10],
//                       int result[][10],
//                       int r1, int c1, int r2, int c2) {

//    // Initializing elements of matrix mult to 0.
//    for (int i = 0; i < r1; ++i) {
//       for (int j = 0; j < c2; ++j) {
//          result[i][j] = 0;
//       }
//    }

//    // Multiplying first and second matrices and storing it in result
//    for (int i = 0; i < r1; ++i) {
//       for (int j = 0; j < c2; ++j) {
//          for (int k = 0; k < c1; ++k) {
//             result[i][j] += first[i][k] * second[k][j];
//          }
//       }
//    }
// }

// // function to display the matrix
// void display(int result[][10], int row, int column) {

//    printf("\nOutput Matrix:\n");
//    for (int i = 0; i < row; ++i) {
//       for (int j = 0; j < column; ++j) {
//          printf("%d  ", result[i][j]);
//          if (j == column - 1)
//             printf("\n");
//       }
//    }
// }

// int main() {
//    int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
//    printf("Enter rows and column for the first matrix: ");
//    scanf("%d %d", &r1, &c1);
//    printf("Enter rows and column for the second matrix: ");
//    scanf("%d %d", &r2, &c2);

//    // Taking input until
//    // 1st matrix columns is not equal to 2nd matrix row
//    while (c1 != r2) {
//       printf("Error! Enter rows and columns again.\n");
//       printf("Enter rows and columns for the first matrix: ");
//       scanf("%d%d", &r1, &c1);
//       printf("Enter rows and columns for the second matrix: ");
//       scanf("%d%d", &r2, &c2);
//    }

//    // get elements of the first matrix
//    getMatrixElements(first, r1, c1);

//    // get elements of the second matrix
//    getMatrixElements(second, r2, c2);

//    // multiply two matrices.
//    multiplyMatrices(first, second, result, r1, c1, r2, c2);

//    // display the result
//    display(result, r1, c2);

//    return 0;
// }
#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

  return 0;
}
