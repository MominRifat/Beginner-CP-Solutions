//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);

    int ticket_price_normal = n*a;
    int ticket_price_special = 0;
    int old_m = m;

    if(n >= m)
    {
        while(n >= m)
        {
            m = m + old_m;
            ticket_price_special = ticket_price_special + b;
        }

        int new_m = m - old_m;
        int req_ticket = n - new_m;
        int new_special_ticket_price = ticket_price_special;
        ticket_price_special = ticket_price_normal + req_ticket*a;
        if(new_m > 0)
        {
            new_special_ticket_price = new_special_ticket_price + b;
        }
        if(ticket_price_special < new_special_ticket_price)
        {
            printf("%d",ticket_price_special);
        }
        else
        {
            printf("%d",new_special_ticket_price);
        }
    }

    else if(n < m)
    {
        if(ticket_price_normal < b)
        {
            printf("%d",ticket_price_normal);
        }
        else
        {
            printf("%d",b);
        }
    }
    return 0;
}