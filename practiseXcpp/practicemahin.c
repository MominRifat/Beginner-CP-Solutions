//Created By Momin_Rifat
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c;
    char num[101];
    scanf("%d %d %d",&a,&b,&c);
    scanf("%s",num);
    int sum = a+b+c;
    printf("%d %s",sum,num);
    return 0;
}
