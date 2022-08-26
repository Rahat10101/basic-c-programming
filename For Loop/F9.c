                            // all Even Number form 1 to n
#include <stdio.h>
int main()
{
    int i,n;
    printf(" Range : ");
    scanf("%d",&n);
    printf(" All Even from 1 to %d \n",n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            printf(" %d ",i);
        }
    }
    return 0;
}
