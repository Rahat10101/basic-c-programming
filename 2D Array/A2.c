                          // sum of 2 matrix

#include<stdio.h>
int main ()
{
    int i,j,n,sum=0;
    printf(" Enter the size of square matrix : ");
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    printf(" Enter the element of the 1st square matrix : \n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf(" Element of a[%d][%d] - ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf(" \n\nEnter the element of the 2nd square matrix : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf(" Element of b[%d][%d] - ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    printf(" \n\nThe 1st Matrix is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf(" \n\nThe 2nd Matrix is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }


    printf(" \n\nThe Addition of two matrix is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            sum=a[i][j]+b[i][j];
                printf("%d\t",sum);
        }
        printf("\n");
    }

    return 0;
}

