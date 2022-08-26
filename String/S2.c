                                   // length of a String

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[100000];
    int i=0;

    printf(" Enter a input : ");
    gets(a);
    printf("\n");

    while (a[i]!='\0')
         {
             i++;
         }
         printf(" Length of the string is : %d ",i);

    return 0;
}
