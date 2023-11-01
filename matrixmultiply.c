#include<stdio.h>  uup,mj
int main()
{
    int i,j,k,a[3][3], b[3][3],c[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter Elements of Matrix a %d %d: " ,i+1, j+1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter Elements of Matrix b %d %d: " ,i+1, j+1);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication of matrices are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]+= a[i][k]*b[k][j];
            }   
        }
    }
    for(i=0;i<3;i++)    
        {    
            for(j=0;j<3;j++)    
            {    
                printf("%d",c[i][j]);    
            }    
            printf("\n");    
        }    
    return 0;
}