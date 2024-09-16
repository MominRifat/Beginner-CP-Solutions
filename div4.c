//Created By Momin_Rifat
#include<stdio.h>
#include<math.h>
int main() 
{
    long long int t;
    scanf("%lld", &t);

    while(t--) 
    {
        long long int n;
        scanf("%lld", &n);

        long long int total_squares = 0;
        for(int i = 0; i < n; i++) 
        {
            long long int ai;
            scanf("%lld", &ai);
            total_squares += ai;
        }

        long long int side_length = (int)sqrt(total_squares);

        if (side_length * side_length == total_squares) 
        {
            printf("YES\n");
        } 
        else 
        {
            printf("NO\n");
        }
    }

    return 0;
}
