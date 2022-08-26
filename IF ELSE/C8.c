                          // Find the largest 2 number between 3 & + , - , * , / between them ...

#include<stdio.h>
int main ()
{
    float a,b,c,sum,substraction,multiplication,divition,nub1,nub2,nub3;
    printf("Enter 3 number \n\n\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a>b && a>c)
    {
        nub1=a;
        if(b>c)
        {
            nub2=b;
        }
        else
        {
            nub2=c;
        }
    }
    else if(b>a && b>c)
    {
        nub1=b;
        if(a>c)
        {
            nub2=a;
        }
        else
        {
            nub2=c;
        }
    }
    else if(c>a && c>a)
    {
        nub1=c;
        if(a>b)
        {
            nub2=a;
        }
        else
        {
            nub2=b;
        }
    }
    printf(" %f is the 1st largest  \n ",nub1);
    printf(" %f is the 2nd largest  \n ",nub2);
    sum=nub1+nub2;
    printf(" %f + %f = %f is the sum \n ",nub1,nub2,sum);
    substraction=nub1-nub2;
    printf("%f - %f = %f is the substraction \n ",nub1,nub2,substraction);
    multiplication=nub1*nub2;
    printf("%f * %f = %f is the multiplication \n ",nub1,nub2,multiplication);
    divition=nub1/nub2;
    printf("%f / %f = %f is the divition \n ",nub1,nub2,divition);

    return 0;
}

