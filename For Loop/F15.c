//          1
//         2 3
//        4 5 6
//       7 8 9 10
#include <stdio.h>
int main()
{
    int i,j,spc,n,k,t=1;
    printf("Input number of rows : ");
    scanf("%d",&n);
    spc=n;
    for(i=1; i<=n; i++)
    {
        for(k=spc; k>=1; k--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ",t++);
        }
        printf("\n");
        spc--;
    }
    return 0;
}

