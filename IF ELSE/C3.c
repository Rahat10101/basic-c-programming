                                     // Positive or Negative
#include<stdio.h>
int main()
{
    int a;
    printf(" Enter the number : ");
    scanf("%d",&a);

    if(a<0)
    {
        printf(" %d is Positive ...",a);
    }
    else if(a==0)
    {
        printf(" %d is Zero ...",a);
    }
    else
    {
        printf(" %d is Negative ...",a);
    }

    return 0;
}


