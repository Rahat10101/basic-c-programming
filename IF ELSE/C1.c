                    // 2 numbers are equal or not
#include<stdio.h>
int main()
{
    int a,b;
    printf(" Enter the 1st number : ");
    scanf("%d",&a);
    printf(" Enter the 2nd number : ");
    scanf("%d",&b);

    if(a==b)
    {
        printf(" %d and %d are Equal ...",a,b);
    }
    else
    {
        printf(" %d and %d are not Equal ...",a,b);
    }


    return 0;
}
