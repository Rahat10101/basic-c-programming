                   // Total number of word in a string
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[100000];
    int i=0,l,o=1;

    printf(" Enter a input : ");
    gets(a);
    printf("\n");

    while (a[i]!='\0')
    {
        i++;
    }
    for (l=0; l<=i; l++)
    {
        if (a[l]==' ' || a[l]=='\n' || a[l]=='\t' )
        {
            o++;
        }
    }
    printf(" Total number of words in the string is : %d ",o);

    return 0;
}
