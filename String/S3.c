                       // All the character of a string
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[100000];
    int i=0;

    printf(" Enter a input : ");
    gets(a);
    printf(" \n");
    printf(" The characters of the string are : ");
    while (a[i]!='\0')
    {
        printf(" %c ",a[i]);
        i++;
    }

    return 0;
}
