#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int c = 0,d = 0;
    gets(a);
    for(int i = 0;a[i]!= '\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)

        {
            c++;
        }
else d++;

    }


    if(c>d)
    {
strupr(a);
    printf("%s",a);
    }
    else
    {
        strlwr(a);
        printf("%s",a);
    }
 return 0;
}
