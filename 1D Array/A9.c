                    // maximum & minimum element of an array
#include <stdio.h>
int main()
{
    int i,n,max=-100000,min=100000;

    printf(" Size of the array :");
    scanf("%d",&n);
    int a[n];

    printf("Input %d elements in the array :\n",n);
    for(i=0; i<n; i++)
    {
        printf("element a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }

    for(i=0; i<n; i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf(" Maximum element is : %d \n", max);
    printf(" Minimum element is : %d \n", min);

    return 0;
}
