                      // Sum of 1 to n

#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf(" Enter the Range : ");
    scanf("%d",&n);
	printf(" Printing 1 to %d : \n",n);
	for (i=1;i<=n;i++)
	{
		printf(" %d ",i);
		sum=sum+i;
	}
	printf(" \n sum of 1 to %d is = %d",n,sum);

    return 0;
}
