                       // Summation by Function
#include<stdio.h>

int add()
{
    int a,b,sum;
    printf(" Enter 2 number for sum - ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf(" The sum is %d .",sum);
}

int main()
{
    add();
    return 0;
}
