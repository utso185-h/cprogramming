#include<stdio.h>
int main()
{
    int ar[100],i,sum = 0,n;
    float avg = 0;
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        scanf("%d",&ar[i]);

    }

    for(i = 0;i<n;i++)
    {
        sum = sum+ar[i];
    }
    avg = sum/n;
    printf("%f",avg);
    return 0;
}
