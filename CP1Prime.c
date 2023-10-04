#include<stdio.h>
int main()
{
   int x,sq=1;
   int flag = 0;
   printf("enter the number");
   scanf("%d",&x);
   for(int i = 0; i*i<=x; i++)
   {
     sq = i;
   }
   
   for(int i = 2; i<sq; i++)
   {
    if(x%i==0)
    {
       flag = 1;
    }
   }
   if(flag==1)
   {
    printf("not prime");
   }
   else{
    printf("prime");
   }
}
