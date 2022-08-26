                      // Multiplication of pointer

#include<stdio.h>
#include<malloc.h>
int main()
{
    int i,n,mul=1;
    int *a;
    printf(" Input the pointer Size : ");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
        mul=mul* *(a+i);
    }

    printf(" Multiplication = %d",mul);

    return 0;
}
