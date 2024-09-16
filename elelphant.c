#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int min_step = (n + 4) / 5;

    printf("%d",min_step);

    return 0;
}