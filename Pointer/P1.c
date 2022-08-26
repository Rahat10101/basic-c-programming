                                // basic pointer
#include<stdio.h>
#include<malloc.h>
int main()
{
    int *a;
    char *b;
    printf(" Input the 1st pointer (Integer Type) : ");
    scanf("%d",&a);
    printf(" Input the 2nd pointer (Character Type) : ");
    scanf("%c",&b);

    printf("%d",*a);
    printf("%c",*b);

    return 0;
}
