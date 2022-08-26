                                // Duplicate Element
#include <stdio.h>

void main()
{
    int n,x=1,count=0,i,j;
    printf(" Size of the array :");
    scanf("%d",&n);
    int a[n],b[n],c[n];

    printf("Input %d elements in the array :\n",n);
    for(i=0; i<n; i++)
    {
        printf("element - a[%d] : ",i+1);
        scanf("%d",&a[i]);
        b[i]=a[i];
        c[i]=0;
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {
                c[j]=x;
                x++;
            }
        }
        x=1;
    }

    for(i=0; i<n; i++)
    {
        if(c[i]==2)
        {
            count++;
        }
    }

    printf("The total number of duplicate elements found in the array is : %d \n", count);

    return 0;
}
