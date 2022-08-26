                                 // Grade System
#include<stdio.h>

int main ()
{
    int a;
    printf ("Enter your number ");
    scanf ("%d",&a);
    if(a>=90)
    {
        printf ("Grade-A");
    }
    else if(a>=87)
    {
        printf ("Grade-B+");
    }
    else if(a>=84)
    {
        printf ("Grade-B");
    }
    else if(a>=80)
    {
        printf ("Grade- B-");
    }
    else if(a>=77)
    {
        printf ("Grade- C+");
    }
    else if(a>=60)
    {
        printf ("Grade- D");
    }

    else
    {
        printf ("Grade- Fail");
    }

    return 0 ;
}
