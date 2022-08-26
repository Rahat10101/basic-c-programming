                            // Upper case or Lower Case
#include <stdio.h>
int main()
{
    char c;
    printf(" Enter a character : ");
    scanf("%c",&c);

    if(c>='a' && c<='z')
    {
        printf("%c is in Lowercase .",c);
    }
      else if(c>='A' && c<='Z')
    {
        printf("%c is in Uppercase .",c);
    }

    else
    {
        printf(" %c is not an alphabet .",c);
    }
    return 0;
}

