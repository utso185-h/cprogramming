#include<stdio.h>
int main()
{
    long int n,p = 0,num,q;
    scanf("%d",&q);

    for(int i = 0;i<q;i++)
    {
     scanf("%d",&n);

    if(n == 1 || n == 2)
    {
        printf("%d\n",p);
    }
if(n>=3)
{
   if(n% 2 != 0)
   {
       num = n/2;

       printf("%d\n",num);
   }
    else
    {
        num = (n/2)-1;
        printf("%d\n",num);

    }

}

}

    return 0;
}
