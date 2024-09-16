//Created By Momin_Rifat
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    int count = 0;

    for(int i = 0; i < t; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        int new_int = abs(a - b);

        if(new_int % 10 == 0 || new_int % 10 != 0)
        {
            count = count + (new_int / 10);
            new_int = new_int % 10;
        }
        if(new_int % 9 == 0 || new_int % 9 != 0)
        {
            count = count + (new_int / 9);
            new_int = new_int % 9;
        }
        if(new_int % 8 == 0 || new_int % 8 != 0)
        {
            count = count + (new_int / 8);
            new_int = new_int % 8;
        }
        if(new_int % 7 == 0 || new_int % 7 != 0)
        {
            count = count + (new_int / 7);
            new_int = new_int % 7;
        }
        if(new_int % 6 == 0 || new_int % 6 != 0)
        {
            count = count + (new_int / 6);
            new_int = new_int % 6;
        }
        if(new_int % 5 == 0 || new_int % 5 != 0)
        {
            count = count + (new_int / 5);
            new_int = new_int % 5;
        }
        if(new_int % 4 == 0 || new_int % 4 != 0)
        {
            count = count + (new_int / 4);
            new_int = new_int % 4;
        }
        if(new_int % 3 == 0 || new_int % 3 != 0)
        {
            count = count + (new_int / 3);
            new_int = new_int % 3;
        }
        if(new_int % 2 == 0 || new_int % 2 != 0)
        {
            count = count + (new_int / 2);
            new_int = new_int % 2;
        }
        if(new_int % 1 == 0 || new_int % 1 != 0)
        {
            count = count + (new_int / 1);
            new_int = new_int % 1;
        }

        printf("%d\n",count);
        count = 0;
    }

    return 0;
}