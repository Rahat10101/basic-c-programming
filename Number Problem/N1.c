              // Factorial
#include <stdio.h>
int main()
{
    int a,n, factorial=1;
    printf(" Enter a number ");
    scanf("%d",&n);
    for (a=1; a<=n; a++)
    {
        factorial=factorial*a;
    }
    printf(" Factorial of %d = %d \n",n,factorial);
    return 0;
}
