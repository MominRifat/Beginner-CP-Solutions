#include<stdio.h>
#include<math.h>
int main()
{
double x;
printf("Enter a number: ");
scanf("%lf", &x);
double num01 = round(x);
double num02 = trunc(x);
double num03 = ceil(x);
double num04 = floor(x);
printf("The round number is %.2lf.\n", num01);
printf("The trunc number is %.2lf.\n", num02);
printf("The ceil number is %.2lf.\n", num03);
printf("The floor number is %.2lf.", num04);
return 0;
}