#include<stdio.h>
int main()
{
    int n,count = 0,i,encount ,j,num;
    scanf("%d",&n);
    for(i =0;i<n;i++)
    {
       scanf("%d",&j);
       if(j == 0)
        {
            count = count+1;
        }
    }

    else printf("hard");
        else
        {
            encount = encount+1;
        }

    }
    if(count == n)
    {
        printf("easy");
    return 0;
}
