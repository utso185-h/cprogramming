#include<stdio.h>
int main()
{
    char a[100],b[100];
    int c,i,j,d;
    gets(a);
    gets(b);
  strrev(a);
 j =  strlen(a);

for( i = 0;a[i]!='\0';i++)
{
    if(b[i] == a[i]) c++;


}
if(j == c)printf("YES");
else printf("NO");

    return 0;
}
