#include<stdio.h>
int main()
{
    int n,p,c,i,num = 0,count = 0;
    scanf("%d",&n);
    for(i = 1;i<=n;i++)
    {
        scanf("%d %d",&p,&c);


    if(p == c)
    {

     count++;

    }
     else if((p +1) < c)
     {
        count++;
     }

    }

    printf("%d",count);

    return 0;
}
