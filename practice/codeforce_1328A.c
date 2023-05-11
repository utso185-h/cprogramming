#include<stdio.h>
int main()
{
    long int ar[100],n,a,b,p=0,count,nam = 10;
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        count = 0;
        for(int j = 0; j<nam;j++)
        {
            if(a%b !=0)
            {
                a++;
                count =count+1;
            nam++;
            }
            else
            {
                ar[p] = count;
                p++;
                break;
            }
        }

    }
    for(int i = 0;i<n;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}
