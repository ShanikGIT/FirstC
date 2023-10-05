#include<stdio.h>
int main()
{
    int x ,y,flag=0;
    printf("Enter the Start No: ");
    scanf("%d",&x);
    printf("Enter the last No: ");
    scanf("%d",&y);

   for(int i = x; i<=y;i++)
            {
                if(i==2)
                {
                    printf("%d\n",i);
                    continue;
                }
                for (int j = 2;j<i;j++)
                {
                    if(i%j==0)
                    {
                        flag = 0;
                        break;
                    }
                    else
                    {
                        flag = i;
                    }
                }
                if(flag!=0)
                {
                   printf("%d\n",flag);
                }
  
            }
            return 0;

}