                       // Swap 2 number by Function
#include<stdio.h>
int swap()
{
    int a,b,x;
    printf(" Enter 2 number for swap -");
    scanf("%d%d",&a,&b);
    x=a;
    a=b;
    b=x;
    printf(" After swapping 1st num is %d & 2nd num is %d",a,b);
}

int main()
{
    swap();
    printf("\n\n");
    return 0;
}
