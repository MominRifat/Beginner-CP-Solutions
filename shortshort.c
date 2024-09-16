//Created By Momin_Rifat
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char name[4];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s",name);

        if((name[0] == 'a' && name[1] == 'b') || (name[0] == 'a' && name[i] == 'c') || (name[0] == 'b' && name[1] == 'a') || (name[0] == 'c' && name[1] == 'b'))
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
