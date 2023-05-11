#include<stdio.h>
int main()
{
    int k,n,w,res = 0,mon = 0,i,no = 0;
    scanf("%d %d %d",&k,&n,&w);
    for(i = 1;i<=w;i++)
    {
        res = res+(k*i);
    }
    mon = (res - n);

    if(res>n)
    {
        printf("%d",mon);
    }

else printf("%d",no);



    return 0;
}
