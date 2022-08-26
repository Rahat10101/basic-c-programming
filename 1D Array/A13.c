                           // Array's Element in Ascending order
#include <stdio.h>
int main()
{
    int a[100000];
    int n,i,j,x;

    printf("  Size : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("element - %d : ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[i])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }

    printf("\n Elements of array in sorted ascending order:\n");

    for(i=0;i<n;i++)
    {
        printf("%d  ", a[i]);
    }

    return 0;
}
