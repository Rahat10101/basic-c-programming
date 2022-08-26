                    // Number of a digit
#include <stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    for(i=n; n!=0; n=n/10)
    {
        count++;
    }

    printf("Number of digits: %d",count);
    return 0;
}
