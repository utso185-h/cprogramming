#include<stdio.h>
int main()
{
   int  ar[3],ag[3],i;
   for(i = 0;i<3;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i= 0;i<3;i++)
    {
        ag[i] = ar[i];
    }
    for(i = 0;i<3;i++)
    {
        printf("%d ",ag[i]);
    }
    return 0;
}
