                           // All the character of a string in reverse order
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[100000];
    int l=0;
    int i;
    printf(" Enter a input : ");
    gets(a);
    printf(" \n");
        while (a[l]!='\0')
         {
             l++;
         }

    printf(" The characters of the string in reverse are : \n ");
    for (i=l;i>=0;i--)
    {
        printf(" %c ",a[i]);
    }

    return 0;
}
