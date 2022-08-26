                      // Sum & Average of 1 to n

#include <stdio.h>
int main()
{
    float i,sum=0;
    float avg,n;
    printf(" Enter the Range : ");
    scanf("%f",&n);
	printf(" Printing 1 to %f : \n",n);
	for (i=1;i<=n;i++)
	{
		printf(" %f ",i);
		sum=sum+i;
	}
	avg=sum/n;
	printf(" \n sum of 1 to %f is = %d",n,sum);
    printf(" \n Average of 1 to %f is = %f",n,avg);
    return 0;
}

