                        // Day to year , month & day ...
#include <stdio.h>
int main()
{
    int a,year,x,day,month;

    printf(" Input The number of Days: ");
    scanf("%d",&a);

    year=a/365;
    x=a%365;

    month=x/30;
    day=x%30;

    printf(" Year : %d \n",year);
    printf(" Month : %d \n",month);
    printf(" Day : %d \n",day);

    return(0);
}
