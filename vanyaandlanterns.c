//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int a,b;
    int m = 0;
    scanf("%d %d",&a,&b);

    int len[a];

    for(int i = 0; i < a; i++)
    {
        scanf("%d",&len[i]);
    }

    for(int j = 0; j < a; j++)
    {
        for(int z = j+1; z < a; z++)
        {
            int temp;
            if(len[j] > len[z])
            {
                temp = len[j];
                len[j] = len[z];
                len[z] = temp;
            }
        }
    }

    for(int i = 0; i < a-1; i++)
    {
        if(len[i+1] - len[i] > m)
        {
            m = len[i+1] - len[i];
        }
    }

    double x = len[0];
    double y = (double)m / 2.0;
    double max;
    if(x < y)
    {
        max = y;
    }
    if(x > y)
    {
        max = x;
    }
    double z = b - len[a-1];
    double answer;
    if(max < z)
    {
        answer = z; 
    }
    if(max > z)
    {
        answer = max;
    }
    printf("%.10f",answer);

    return 0;
}