#include<stdio.h>
int main()
{
   int n,reversed=0,remainder;
   printf("enter a number:");
   scanf("%d",&n);
   do{
   remainder=n%10;
   reversed=reversed*10+remainder;
   n/=10;
   }while(n!=10);
   printf("reversed number=%d",reversed);
   return 0;
   }
