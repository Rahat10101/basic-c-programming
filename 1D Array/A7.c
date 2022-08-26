// Take n input in Array &  Copy it to another array

#include<stdio.h>
int main()
{
    int i,n;
    printf(" Size of the Array : ");
    scanf("%d",&n);
    int a[n],b[n];
    printf(" Taking Input : \n");
    for(i=0; i<n; i++)
    {
        printf(" Element a[%d] : ",i+1);
        scanf("%d",&a[i]);
        b[i]=a[i];
    }

    printf(" Output : \n");
    for(i=0; i<n; i++)
    {
        printf(" Element b[%d] : %d \n",i+1,b[i]);
    }

    return 0;
}



