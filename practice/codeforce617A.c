#include<stdio.h>
int main()
{
    int n,res = 0;
    scanf("%d",&n);
    if(n>=5)
    {
        if(n%5 != 0)
        res = 1+(n/5);
    else
        {
        res = n/5;
    }

    }

    else if(n == 4)
    {
        res = n/4;
    }
    else if(n == 3)
    {
        res = n/3;
    }
    else if(n == 2)
    {
        res = n/2;
    }
    else
    {
        res = n/1;
    }



    printf("%d",res);
    return 0;
}
