//Created By Momin_Rifat
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++)
    {
        int n;
        scanf("%d",&n);
        char set[n];
        scanf("%s",set);
        int count[26] = {0};
        int c = 0;
        while(set[c] != '\0') 
        {
            if(set[c] >= 'A' && set[c] <= 'Z' )
            {
                count[set[c]-'A']++;
            }
            c++;
        }
        int solve = 0;
        while(set[c] != '\0')
        {
            if(count[set[c]] == c+1)
            {
                solve++;
            }
        }
        printf("%d",solve);
    }
    return 0;
}
