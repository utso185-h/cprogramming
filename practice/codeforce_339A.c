#include<stdio.h>
int main()
{
    char a[105],max[105],tem;
    int i,j,len;
    gets(a);
    len =  strlen(a);
    for(int i = 0;a[i]!='\0';i++)
    {
     for(j = 0;j<len -1;j= j+2)

     {


        if(a[i] == '+')
    {
        a[i] =a[i];
    }
    else
    {
        if(a[j]>= a[j+2])
        {


        tem = a[j+2];
      a[j] = tem;
      a[j+2]= tem;


    }
    }
    }
    }
    printf("%s",max);

    return 0;
}
