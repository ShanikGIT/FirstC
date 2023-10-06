#include<stdio.h>
int main()
{
    int x;
    printf("counting: ");
    scanf("%d",&x);
    int n1 = 0,n2=1,n3;
    printf("%d%d\n",n1,n2);
   // printf("%d",n2);
     
        for(int i = 0; i <x-2 ; i ++)
          {
            n3 = n2+n1;
           printf("%d ",n3);
            n1=n2;
            n2=n3;
          }
          return 0;
}