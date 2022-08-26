                  // Square Of a number by Function
#include<stdio.h>

int square()
{
    int a,square;
    printf(" Enter the number for square -");
    scanf("%d",&a);
    square=a*a;
    printf(" The square is %d .",square);
}

int main()
{
    square();
    printf("\n\n");
    return 0;
}
