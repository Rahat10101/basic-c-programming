                    // number of alphabet , digit & number in a string


#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100000];
    int alp, digit, space, i;
    alp = digit = space = i = 0;

    printf("Input the string : ");
    gets(str);

    while (str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            space++;
        }

        i++;
    }

    printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", space);
    return 0;
}
