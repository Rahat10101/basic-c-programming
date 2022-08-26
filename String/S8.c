                         // total number of vowel and consonant in a string


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char a[100000];
    int i, j, vowel=0, cons=0;

    printf("Input the string : ");
    gets(a);

    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i] =='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        {
            vowel++;
        }
        else
        {
            cons++;
        }
    }
    printf("\nThe total number of vowel in the string is : %d\n", vowel);
    printf("The total number of consonant in the string is : %d\n\n", cons);
}
