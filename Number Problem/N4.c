                     // 1st & last digit of a number
#include<stdio.h>
int main()
{
    int i,n,last;
    printf("Enter any number : ");
    scanf("%d",&n);
    last = n%10;
    for(i=n; n>=10; n=n/10)
    {
        n=n/10;
    }
    printf("The first digit of entered number: %d\n", n);
    printf("The last digit of entered number: %d\n", last);
    return 0;
}
