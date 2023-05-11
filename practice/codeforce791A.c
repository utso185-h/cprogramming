#include<stdio.h>
int main()
{
   int a,b,res = 1,sum = 1,i;
    scanf("%d %d",&a,&b);
    for(i =1;i<=10;i++)
    {
        a = a*3;
        b = b*2;
        if(a>b)

    {
        printf("%d",i);
        break;

    }



    }

    return 0;
}
