// Take n input in Array &  print it & find sum of the element

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf(" Size of the Array : ");
    scanf("%d",&n);
    int a[n];
    printf(" Taking Input : \n");
    for(i=0; i<n; i++)
    {
        printf(" Element a[%d] : ",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    printf(" Output : \n");
    for(i=0; i<n; i++)
    {
        printf(" Element a[%d] : %d \n",i+1,a[i]);
    }
    printf(" Sum : %d \n",sum);

    return 0;
}


