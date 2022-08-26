                           // www.w3resource.com Array er 53


#include<stdio.h>
int main ()
{
    int i,j,n,x,count=0;
    printf(" Enter the size of the Array : ");
    scanf("%d",&n);
    int a[n];
    printf(" Enter the element of the Array : \n");

    for(i=0; i<n; i++)
    {
        printf(" Element of a[%d] - ",i+1);
        scanf("%d",&a[i]);
    }

    printf(" The Array is : \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");

    printf(" Which element do you want to find from the array ???\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            count++;
        }
    }
    printf(" %d occurs %d times .\n",x,count);

return 0;
}

