                    // Array er vetor odd % even gulor sum
#include <stdio.h>
int main()
{
    int i,n,sum1=0,sum2=0;

    printf(" Size of the array :");
    scanf("%d",&n);
    int a[n];

    printf("Input %d elements in the array :\n",n);
    for(i=0; i<n; i++)
    {
        printf("element a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            sum1=sum1+a[i];
        }
    }

    for(i=0; i<n; i++)
    {
        if(a[i]%2!=0)
        {
            sum2=sum2+a[i];
        }
    }
    printf(" Sum of the Odd element is : %d \n", sum2);
    printf(" Sum of the Even element is : %d \n", sum1);

    return 0;
}

