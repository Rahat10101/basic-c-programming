                     // Sum of the digit's of a number
#include <stdio.h>
int main()
{
    int i,n,a,sum=0;
    printf("Input a number : ");
    scanf("%d",&n);

    for(i=n; n!=0; n=n/10)
    {
        a=n%10;
        sum=sum+a;
    }
    printf(" Sum of the digit's of the number is : %d \n",sum);

    return 0;
}


