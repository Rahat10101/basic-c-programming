                           // Centigrade to Fahrenheit
#include <stdio.h>
int main()
{
    float f,c;

    printf("Input a temperature (in Centigrade): ");
    scanf("%f",&c);

    f = ((9.0/5.0)*c)+32.0;
    printf(" %f degrees Fahrenheit .\n", f);

    return(0);
}
