#include<stdio.h>
int series(int n)
{
    if(n==1)
        return 1;
    else
        return n*(n+series(n-1));


}

int main()
{
int a;
scanf("%d",&a);
printf("%d",series(a));
    return 0;
}
