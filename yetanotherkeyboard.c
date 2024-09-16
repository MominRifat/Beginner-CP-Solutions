//Created By Momin_Rifat
#include <stdio.h>
#include <string.h>
int main() 
{
    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++) 
    {
        char s[3];
        scanf("%s",s);

        for(int i = 1; i <= 8; i++) 
        {
            if(i != s[1] - '0') 
            {
                printf("%c%d\n",s[0],i);
            }
        }

        for(char i = 'a'; i <= 'h'; i++) 
        {
            if(i != s[0]) 
            {
                printf("%c%d\n",i,s[1] - '0');
            }
        }
    }

    return 0;
}