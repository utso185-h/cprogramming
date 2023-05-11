 #include<stdio.h>
 #include<string.h>
int main()
{

    char a[105],c[105];
    gets(a);
    gets(c);
    strrev(a);
    int d = strcmp(a,c);
   if(d == 0)printf("YES");
   else printf("NO");




    return 0;
}
