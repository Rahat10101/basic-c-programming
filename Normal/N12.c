                                   // Swap 2 number
#include<stdio.h>
int main()
{
    int a,b,x;
    printf(" Enter the 1st number : ");
    scanf("%d",&a);
    printf(" Enter the 2nd number : ");
    scanf("%d",&b);

    x=a;
    a=b;
    b=x;

    printf(" After swapping 1st number is %d & 2nd number id %d ...",a,b);

    return 0;
}

