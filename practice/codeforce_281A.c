#include<stdio.h>
int main()
{
    char c[1000];
    int d = 0 ,n,a = 0,i;
   scanf("%d",&n);


for(i = 0;i<n;i++)

{
  scanf("%c",&c);
    if(c == 'A')
    {
        a = a+1;
    }
    else d++;
}
if(a>d)printf("Anton");
else if(a<d)printf("Danik");
else printf("Friendship");
printf("%d %d",a,d);

    return 0;

}
