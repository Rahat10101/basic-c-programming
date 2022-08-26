                        //  In Pointer take n number & sum up them

#include<stdio.h>
#include<malloc.h>
int main()
{
    int i,n,sum=0;
    int *a;
    printf(" Input the pointer Size : ");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
        sum=sum+ *(a+i);
    }

    printf(" Sum = %d",sum);

    return 0;
}
