#include<stdio.h>
int main()
{

    int a,d,count1 = 0,count2 = 0;
    char st[1000000];
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%c",&st[i]);

        if(st[i] == 'A')
        {


            count1= count1 + 1;
        }
        else
        {
            count2 = count2 +1;
        }


    }
    if(count1  > count2)
       {
            printf("Anton");
       }


    else if(count1 < count2)
    {
          printf("Danik");
    }
    else
        printf("Friendship");

    return 0;
}



