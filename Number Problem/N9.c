                           // Palindrome number
#include <stdio.h>
int main()
{
    int i,x,n,a,sum=0;
    printf("Input a number : ");
    scanf("%d",&n);
    x=n;
    for(i=n; n!=0; n=n/10)
    {
        a=n%10;
        sum=sum*10+a;
    }
    if(sum==x)
    {
        printf(" %d is a Palindrome Number ... ",x);
    }
    else
    {
        printf(" %d is not a Palindrome Number ... ",x);
    }

    return 0;
}
