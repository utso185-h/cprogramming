#include<stdio.h>
int main()
{
    long int n,k,num = 0;
    scanf("%d %d",&num,&k);
    for(int i = 1; i<=k; i++)
    {

        if(num%10 != 0)
        {
            num = num - 1;
        }
        else if(num%10 == 0)
        {
            num = num/10;
        }
    }

    printf("%d",num);
    return 0;
}
