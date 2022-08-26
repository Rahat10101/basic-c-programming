                        // print n to 1
#include <stdio.h>
int main()
{
    int i,n;
    printf(" Enter the Range : ");
    scanf("%d",&n);
	printf(" Printing %d to 1 : \n",n);
	for (i=n;i>=1;i--)
	{
		printf(" %d ",i);
	}
     return 0;
}
