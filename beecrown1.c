#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t;
    char name[5];
    int time = 0;

    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%s",name);

        int a = name[0] - '0';
        int b = name[1] - '0';
        int c = name[2] - '0';
        int d = name[3] - '0';
        
        if(a == 0)
        {
            a = 10; 
        }
        if(b == 0)
        {
            b = 10; 
        }
        if(c == 0)
        {
            c = 10; 
        }
        if(d == 0)
        {
            d = 10; 
        }

        time = time + abs(1 - a);
        time = time + abs(a - b);
        time = time + abs(b - c);
        time = time + abs(c - d);

        printf("%d\n",time + 4);

        time = 0;
    }
    return 0;
}