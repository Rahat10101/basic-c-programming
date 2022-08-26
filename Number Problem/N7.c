                               // prime number from 1 to n and there sum
#include <stdio.h>
int main()
{
    int n,i,j,flag=0,sum=0;
    printf("Enter a positive integer : ");
    scanf("%d",&n);
    printf(" Printing the prime numbers form 1 to %d : \n",n);
    for(i=2; i<=n; i++)
    {
        flag=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf(" %d ",i);
            sum=sum+i;
        }
    }
    printf("\n Sum = %d ",sum);

    return 0;
}

