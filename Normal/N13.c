                       // Area of a Triangle
#include<stdio.h>
int main()
{
    int a,b,c,s,area;
    printf(" Enter the 1st side of the triangle : ");
    scanf("%d",&a);
    printf(" Enter the 2nd side of the triangle : ");
    scanf("%d",&b);
    printf(" Enter the 3rd side of the triangle : ");
    scanf("%d",&c);
    s=(a+b+c)/2;
    area=s*(s-a)*(s-b)*(s-c);
    printf(" Area of the triangle is : %d ",area);
    return 0;
}
