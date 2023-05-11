#include<stdio.h>
int main()
{
 int  n,num,count = 0,m = 1,i;
    scanf("%d",&n);

num = n/2;


    for( i =1;i<=num;i++)
    {

       if(n%i == 0)
        {
            count = count+1;
        }



    }



printf("%d",count);

    return 0;
}
