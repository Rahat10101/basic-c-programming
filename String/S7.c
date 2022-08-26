                     // copy a string


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char a1[100000], a2[100000];
    int  i=0;

       printf("Input the string : ");
       gets(a1);

    while(a1[i]!='\0')
    {
        a2[i] = a1[i];
        i++;
    }

    a2[i] = '\0';

    printf("\nThe First string is : %s\n", a1);
    printf("The Second string is : %s\n", a2);
    printf("Number of characters copied : %d\n\n", i);
}
