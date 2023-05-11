#include<stdio.h>
int main()
{
    int a,n,h,cou1 =0,cou2 = 0,res = 0;
    scanf("%d %d",&n,&h);
    for(int i = 1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a<=h)
        {
            cou1 = cou1+1;
        }
        else
        {
            cou2 = cou2+2;
        }
    }

        res = cou1+cou2;
        printf("%d",res);

    return 0;
}
