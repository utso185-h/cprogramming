#include<stdio.h>
int main()
{
     int i,ar[9],sum = 0;
   for(i = 0;i<9;i++)
   {
       scanf("%d",&ar[i]);
   }
   for(i = 0;i<1;i++)
    {
        for(int j = 1;j<=9;j++)
        {
            if(ar[i] == ar[j])
                sum = sum+1;
        }
    }
    printf("%d",sum);



    return 0;
}
