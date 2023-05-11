#include<stdio.h>
int main()
{

  int n,num;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
        scanf("%d",&num);

    if(num<=1399)printf("Division 4");


    if(num>=1400 && num<=1599 )printf("Division 3");
    if(num>=1600 && num<=1899)printf("Division 2");
        if(num>=1900)printf("Division 1");



  }







    return 0;
}
