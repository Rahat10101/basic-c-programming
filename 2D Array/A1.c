                           // Matrix input & output

#include<stdio.h>
int main ()
{
    int i,j,n;
    printf(" Enter the size of a square matrix : ");
    scanf("%d",&n);
    int a[n][n];
    printf(" Enter the element of the square matrix : \n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf(" Element of a[%d][%d] - ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf(" The Matrix is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
