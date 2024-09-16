//Created By Momin_Rifat
#include<stdio.h>
#include<string.h>
int main() 
{
    int T;
    scanf("%d",&T);

    while (T--) 
    {
        int n,m;
        scanf("%d %d",&n,&m);
        char s[51], t[51];
        scanf("%s",s);
        scanf("%s",t);

        int possible = 0;

        for(int i = 0; i <= n - m; i++) 
        {
            char new_s[101];
            strcpy(new_s,s);
            for (int j = 0; j < m; j++) 
            {
                new_s[i + j] = t[j];
            }

            int is_good = 1;

            for(int k = 1; k < n; k++) 
            {
                if (new_s[k] == new_s[k - 1]) 
                {
                    is_good = 0;
                    break;
                }
            }

            if(is_good) 
            {
                possible = 1;
                break;
            }
        }

        if(possible) 
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
