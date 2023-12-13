/*Practice using multidimensional arrays 
for matrix operations.
                  
                  OUTPUT
Enter size of array: 3
Enter 1 1 Element of first array: 1
Enter 1 2 Element of first array: 2
Enter 1 3 Element of first array: 3
Enter 2 1 Element of first array: 4
Enter 2 2 Element of first array: 5
Enter 2 3 Element of first array: 6
Enter 3 1 Element of first array: 7
Enter 3 2 Element of first array: 8
Enter 3 3 Element of first array: 9 
Enter 1 1 Element of second array: 9
Enter 1 2 Element of second array: 8
Enter 1 3 Element of second array: 7
Enter 2 1 Element of second array: 6
Enter 2 2 Element of second array: 5
Enter 2 3 Element of second array: 4
Enter 3 1 Element of second array: 3
Enter 3 2 Element of second array: 2
Enter 3 3 Element of second array: 1
First Matrix is:
1 2 3
4 5 6
7 8 9
Second Matrix is:
9 8 7
6 5 4
3 2 1
Sum of Matrices is:
10 10 10
10 10 10
10 10 10
Sub Matrix is:
-8 -6 -4
-2 0 2
4 6 8
Matrix multiplication is:
9 12 9
32 25 12
49 32 9
Transpose of first matrix is:
1 4 7
2 5 8
3 6 9
Transpose of second matrix is:
9 6 3
8 5 2 
7 4 1 */


#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n][n],b[n][n],c[n][n],d[n][n],e[n][n],ta[n][n],tb[n][n];
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter %d %d Element of first array: ", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter %d %d Element of second array: ", i+1,j+1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("First Matrix is:\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix is:\n");
    //Sum of two Matrices
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("Sum of Matrices is:\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    //Sub of matrices
    printf("Sub Matrix is:\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
    //Multiplication of matrices
    printf("Matrix multiplication is:\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            e[i][j]=a[i][j]*b[j][i];
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ", e[i][j]);
        }
        printf("\n");
    }
    //Transpose of matrices
    printf("Transpose of first matrix is: \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            ta[i][j]=a[j][i];
            tb[i][j]=b[j][i];
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ", ta[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of second matrix is: \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ", tb[i][j]);
        }
        printf("\n");
    }
    return 0;
}
