                         // Find the largest number between 2 number

#include<stdio.h>
int main()
{
    int a,b;
    printf(" Enter the 1st number : ");
    scanf("%d",&a);
    printf(" Enter the 2nd number : ");
    scanf("%d",&b);

    if(a>b)
    {
        printf(" %d is bigger than %d ...",a,b);
    }

    else if(a==b)
    {
        printf(" %d & %d are Equal ...",a,b);
    }

    else
    {
        printf(" %d is bigger than %d ...",b,a);
    }

    return 0;
}
