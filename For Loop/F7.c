                               // multiplication table of n
#include <stdio.h>
int main()
{
   int i,n;
   printf("Input the number : ");
   scanf("%d",&n);
   printf("\n");
   for(i=1;i<=10;i++)
   {
     printf("%d X %d = %d \n",n,i,n*i);
   }
   return 0;
}
