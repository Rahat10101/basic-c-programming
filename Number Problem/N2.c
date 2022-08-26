                       // Reverse of a number
#include <stdio.h>
int main()
{
    int i,n,a,sum=0;
    printf("Input a number : ");
    scanf("%d",&n);

    for(i=n; n!=0; n=n/10)
    {
        a=n%10;
        sum=sum*10+a;
    }
    printf("The number in reverse order is : %d \n",sum);
}
