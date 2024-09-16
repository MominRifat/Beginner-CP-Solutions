//Created By Momin_Rifat
#include<stdio.h>
#include<string.h>
int main() 
{
    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++) 
    {
        char num[501];
        scanf("%s",num);
        int len = strlen(num);

        if(num[0] == '-') 
        {
            for(int i = 1; i < len; i++) 
            {
                num[i] = num[i] - '0';
            }

            for (int i = 1; i < len; ++i) 
            {
                for (int j = i + 1; j < len; ++j)
                {
                    if (num[i] > num[j]) 
                    {
                        int temp =  num[i];
                        num[i] = num[j];
                        num[j] = temp;
                    }
                }
            }
            printf("%c",'-');
            for(int i = 1; i < len; i++) 
            {
                printf("%d",num[i]);
            }
            printf("\n");
        } 
        else 
        {
            for(int i = 0; i < len; i++) 
            {
                num[i] = num[i] - '0';
            }
            for(int i = 0; i < len - 1; i++) 
            {
                for(int j = 0; j < len - i - 1; j++) {
                    if(num[j] < num[j + 1]) {
                        int temp = num[j];
                        num[j] = num[j + 1];
                        num[j + 1] = temp;
                    }
                }
            }
            for(int i = 0; i < len; i++) 
            {
                printf("%d",num[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
