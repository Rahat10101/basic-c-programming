                        // print 1 to n
#include <stdio.h>
int main()
{
    int i,n;
    printf(" Enter the Range : ");
    scanf("%d",&n);
	printf(" Printing 1 to %d : \n",n);
	for (i=1;i<=n;i++)
	{
		printf(" %d ",i);
	}
    return 0;
}
