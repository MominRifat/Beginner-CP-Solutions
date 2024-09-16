//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int n,m,a,b;

    scanf("%d %d %d %d",&n,&m,&a,&b);

    int old_m = m;
    int total_price_without_buing_special_ticket = n * a;
    int total_price_with_buing_special_ticket = 0;

    while(n >= m)
    {
        total_price_with_buing_special_ticket = total_price_with_buing_special_ticket + (b + b);
        m = m + old_m;
    }
    int new_m = m - old_m;
    int ride_left = n - new_m;
    total_price_with_buing_special_ticket = total_price_with_buing_special_ticket + ride_left * a;

    if(total_price_without_buing_special_ticket <= total_price_with_buing_special_ticket)
    {
        printf("%d",total_price_without_buing_special_ticket);
    }
    else if(total_price_without_buing_special_ticket >= total_price_with_buing_special_ticket)
    {
        printf("%d",total_price_with_buing_special_ticket);
    }

    return 0;
}