//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int drink_price[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&drink_price[i]);
    }

    int q;
    scanf("%d",&q);
    int ith_day_taka[q];
    for(int i = 0; i < q; i++)
    {
        scanf("%d",&ith_day_taka[i]);
    }
    
    int count = 0;
    for(int i = 0; i < q; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(drink_price[j] <= ith_day_taka[i])
            {
                count++;
            }
        }
        printf("%d\n",count);
        count = 0;
    }
    return 0;
}
