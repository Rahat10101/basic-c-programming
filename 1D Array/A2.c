// Take 10 input in Array & print it
#include<stdio.h>
int main()
{
    int i,a[10];
    printf(" Taking Input : \n");
    for(i=0; i<10; i++)
    {
        printf(" Element a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }

    printf(" Output : \n");
    for(i=0; i<10; i++)
    {
        printf(" Element a[%d] : %d \nn",i+1,a[i]);
    }

    return 0;
}
