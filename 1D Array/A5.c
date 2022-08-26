// Take n input in Array &reverse  print it
#include<stdio.h>
int main()
{
    int i,n;
    printf(" Size of the Array : ");
    scanf("%d",&n);
    int a[n];
    printf(" Taking Input : \n");
    for(i=0; i<n; i++)
    {
        printf(" Element a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }

    printf(" Output : \n");
    for(i=n-1; i>=0; i--)
    {
        printf(" Element a[%d] : %d \n",i+1,a[i]);
    }

    return 0;
}



